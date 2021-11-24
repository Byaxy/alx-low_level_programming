#!/usr/bin/python3
"""Task 5 module"""


def island_perimeter(grid):
    """Returns the perimeter of the island in the grid"""
    total = 0
    last = []
    current = []
    for index, lst in enumerate(grid):
        for idx, cell in enumerate(lst):
            if cell == 1:
                current.append(idx)
                if idx == 0 or lst[idx - 1] == 0:
                    total += 1
                if idx == len(lst) - 1 or lst[idx + 1] == 0:
                    total += 1
                if idx not in last:
                    total += 1
                if index + 1 < len(grid):
                    if grid[index + 1][idx] != 1:
                        total += 1
                else:
                        total += 1
        last = current.copy()
        current = []
