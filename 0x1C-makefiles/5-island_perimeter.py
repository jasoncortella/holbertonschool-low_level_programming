#!/usr/bin/python3
""" Function to find an island's perimeter"""

# impor t numpy as np


def island_perimeter(grid):
    """Find perimeter"""
    pg = [[0 for i in range(2 + len(grid[0]))] for j in range(2 + len(grid))]
#    print("pgrid initialization")
#    print(np.matrix(pgrid))
#    print("---------------")
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j]:
                pg[i+1][j] += 1  # above
                pg[i+1][j+2] += 1  # below
                pg[i][j+1] += 1  # left
                pg[i+2][j+1] += 1  # right
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j]:
                pg[i+1][j+1] = 0
    perimeter = 0
#    print("grid")
#    print(np.matrix(grid))
#    print("---------------")
#    print("pgrid")
#    print(np.matrix(pgrid))
    for i in range(len(pg)):
        for j in range(len(pg[0])):
            perimeter += pg[i][j]
    return perimeter
