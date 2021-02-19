#!/usr/bin/python3
"""
calculates the minimum amount of processes necessary
to create a certain number of characters.
"""


def minOperations(n):
    """
    Min Operations

    Args:
        n (int): number of copies

    Returns:
        [int]: [minimun operations]
    """

    p = 0

    if n <= 1 or type(n) != int:
        return p

    for i in range(2, n + 1):
        while (0 == n % i):
            p = p + i
            n = n / i
            if n < i:
                break
    return p
