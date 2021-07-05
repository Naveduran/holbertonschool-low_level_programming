#!/usr/bin/python3
"""shows the perimeter of an island"""


def island_perimeter(grid):
    """returns perimeter of island described in grid. """

    sum = 0

    for row in range(len(grid)):

        for column in range(len(grid[row])):

            value = grid[row][column]
            limits = 4

            if value == 1:

                if row != len(grid) - 1 and grid[row + 1][column] == 1:
                    limits -= 1

                if row != 0 and grid[row - 1][column] == 1:
                    limits -= 1

                if column != len(grid[0]) - 1 and grid[row][column + 1] == 1:
                    limits -= 1

                if column != 0 and grid[row][column - 1] == 1:
                    limits -= 1

                sum += limits
    return sum
