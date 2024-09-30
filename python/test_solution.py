import pytest
from main import Solution

@pytest.fixture
def solution():
    return Solution()

def test_single_island(solution):
    # Test case where the entire grid forms one big island
    grid = [
        ["1", "1", "1", "1", "0"],
        ["1", "1", "0", "1", "0"],
        ["1", "1", "0", "0", "0"],
        ["0", "0", "0", "0", "0"]
    ]
    assert solution.numIslands(grid) == 1

def test_three_islands(solution):
    # Test case with multiple distinct islands
    grid = [
        ["1", "1", "0", "0", "0"],
        ["1", "1", "0", "0", "0"],
        ["0", "0", "1", "0", "0"],
        ["0", "0", "0", "1", "1"]
    ]
    assert solution.numIslands(grid) == 3

def test_no_islands(solution):
    # Test case with no land, only water
    grid = [
        ["0", "0", "0", "0"],
        ["0", "0", "0", "0"],
        ["0", "0", "0", "0"],
        ["0", "0", "0", "0"]
    ]
    assert solution.numIslands(grid) == 0

def test_all_land_is_one_island(solution):
    # Test case where the entire grid is one big island
    grid = [
        ["1", "1", "1", "1"],
        ["1", "1", "1", "1"],
        ["1", "1", "1", "1"],
        ["1", "1", "1", "1"]
    ]
    assert solution.numIslands(grid) == 1

def test_diagonally_connected_not_islands(solution):
    # Test case where land is connected diagonally but doesn't count as one island
    grid = [
        ["1", "0", "0"],
        ["0", "1", "0"],
        ["0", "0", "1"]
    ]
    assert solution.numIslands(grid) == 3

def test_single_land_cell(solution):
    # Test case with one single land cell
    grid = [
        ["0", "0", "0"],
        ["0", "1", "0"],
        ["0", "0", "0"]
    ]
    assert solution.numIslands(grid) == 1

def test_sparse_islands(solution):
    # Test case with sparse land cells forming multiple small islands
    grid = [
        ["1", "0", "0", "0", "1"],
        ["0", "0", "0", "0", "0"],
        ["0", "0", "1", "0", "0"],
        ["0", "1", "0", "0", "1"]
    ]
    assert solution.numIslands(grid) == 5
