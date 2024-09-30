from rich.console import Console
from rich.panel import Panel

def pytest_terminal_summary(terminalreporter, exitstatus, config):
    console = Console()

    # Get the passed and failed test stats without counting duplicates
    passed = terminalreporter.stats.get("passed", [])
    failed = terminalreporter.stats.get("failed", [])

    # Prevent overcounting by using a set to remove duplicates
    passed_unique = list({test.nodeid for test in passed})
    failed_unique = list({test.nodeid for test in failed})

    # Print summary with accurate counts
    summary_panel = Panel(
        f"[bold green]✔️ Passed: {len(passed_unique)}[/] [bold red]❌ Failed: {len(failed_unique)}[/] 🏁",
        title="[bold blue]Test Summary[/]",
        border_style="bright_blue"
    )
    console.print(summary_panel)

    if passed_unique:
        console.print(Panel(f"[green]🎉 Congratulations! {len(passed_unique)} passed tests:[/]", border_style="green"))
        for test in passed_unique:
            console.print(f"[green]✔️[/] {test}")

    if failed_unique:
        console.print(Panel(f"[red]⚠️ Oops! {len(failed_unique)} failed tests:[/]", border_style="red"))
        for test in failed:
            console.print(f"[red]❌[/] {test.nodeid}")
            # Access longrepr from the report object, not directly from a string
            if hasattr(test, 'longrepr'):
                console.print(Panel(str(test.longrepr), border_style="red"))
