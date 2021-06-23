# 0x14. Heap Extract

## Print function
To match the examples in the tasks, you are given [this function](https://github.com/holbertonschool/0x1C.c)

This function is used only for visualization purposes. You don’t have to push it to your repo. It may not be used during the correction.

## Task
Write a function that extracts the root node of a Max Binary Heap:

* Prototype: int heap_extract(heap_t **root);
* root is a double pointer to the root node of the heap
* Your function must return the value stored in the root node
* The root node must be freed and replace with the last level-order node of the heap
* Once replaced, the heap must be rebuilt if necessary
* If your function fails, return 0

Note: In order for the main file to compile, you are provided with this static library. This library won’t be used during correction, its only purpose is for testing.