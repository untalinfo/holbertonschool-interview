#!/usr/bin/python3
"""
Lockboxes Method
"""


def canUnlockAll(boxes):
    """
    Determines if all the boxes can be opened
    """
    keys = [0]

    for key in keys:
        # loop through the keys
        box = boxes[key]
        for nkey in box:
            # get the new key in each box
            if nkey not in keys and nkey < len(boxes):
                # save the new key in the keys list
                keys.append(nkey)

    if len(keys) == len(boxes):
        return True
    else:
        return False
