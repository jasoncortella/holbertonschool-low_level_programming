#!/usr/bin/python3
""" Function to find an island's perimeter"""

# numpy as np

def island_perimeter(grid):
    """Find perimeter"""
    pgrid = [[0 for i in range(2 + len(grid[0]))] for j in range(2 + len(grid))]
#    print("pgrid initialization")
#    print(np.matrix(pgrid))
#    print("---------------")
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j]:
                pgrid[i+1][j] += 1  # above
                pgrid[i+1][j+2] += 1  # below
                pgrid[i][j+1] += 1  # left
                pgrid[i+2][j+1] += 1  # right
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j]:
                pgrid[i+1][j+1] = 0
    perimeter = 0
#    print("grid")
#    print(np.matrix(grid))
#    print("---------------")
#    print("pgrid")
#    print(np.matrix(pgrid))
    for i in range(len(pgrid)):
        for j in range(len(pgrid[0])):
            perimeter += pgrid[i][j]
    return perimeter
