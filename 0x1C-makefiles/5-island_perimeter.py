#!/usr/bin/python3

""" This module contains the function island_perimeter(grid) """


def island_perimeter(grid):
    """
    args:
        @grid: describes island

    returns the perimeter of the island described in grid.

    grid is a list of list of integers:
        0 represents a water zone.
        1 represents a land zone.
        One cell is a square with side length 1.
        Grid cells are connected horizontally/vertically (not diagonally).
        Grid is rectangular, width and height don’t exceed 100.
    Grid is completely surrounded by water,
        and there is one island (or nothing).
    The island doesn’t have “lakes”
        (water inside that isn’t connected to the water around the island).
    """
    perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if (i > 0 and grid[i - 1][j] == 0) or (i == 0):
                    perimeter += 1
                if ((i + 1 < len(grid) and grid[i + 1][j] == 0)
                        or (i + 1 == len(grid))):
                    perimeter += 1
                if (j > 0 and grid[i][j - 1] == 0) or (j == 0):
                    perimeter += 1
                if ((j + 1 < len(grid[i]) and grid[i][j + 1] == 0)
                        or (j + 1 == len(grid[i]))):
                    perimeter += 1

    return perimeter
