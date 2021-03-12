#!/usr/bin/python3
""" Module that reads stdin line """

import sys


def main():
    """ Method that prints stdin line by line """
    output = []
    for line in sys.stdin:
        print(line.rstrip())
        words = line.split()
        output.append(words[-1])
        if len(output) == 10:
            output = list(map(int, output))
            total = sum(output)
            print('File size: {}'.format(total))


if __name__ == '__main__':
    main()
