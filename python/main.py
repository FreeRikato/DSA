from collections import deque
from typing import List

class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        no_of_islands = 0

        return no_of_islands

if __name__ == "__main__":
    # Sample input from the problem description
    grid = [
        ["1", "1", "1", "1", "0"],
        ["1", "1", "0", "1", "0"],
        ["1", "1", "0", "0", "0"],
        ["0", "0", "0", "0", "0"]
    ]
    sol = Solution()
    print(sol.numIslands(grid))  # Expected output: 1
