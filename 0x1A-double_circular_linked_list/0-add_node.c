#include "list.h"


/**
 * add_node_end - Add a new node to the end of a double circular linked list
 * @list: list to be modified
 * @str: the string to copy into the new node
 * Return: Address of the new node, or NULL on failure
*/

List *add_node_end(List **list, char *str)
{
	List *new_node = NULL;

	new_node = malloc(sizeof(List));
	if (new_node == NULL)
	{
		return (new_node);
	}

	/**
	 * The strdup() and strndup() functions
	 * are used to duplicate a string.
	 * Returns: A pointer to a null-terminated byte string, which
	 * is a duplicate of the string pointed to by s.
	*/
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		return (NULL);
	}

	if ((*list) == NULL)
	{
		new_node->next = new_node;
		new_node->prev = new_node;
		(*list) = new_node;
		return (new_node);
	}

	new_node->next = (*list);
	new_node->prev = (*list)->prev;
	(*list)->prev = new_node;
	new_node->prev->next = new_node;
	return (new_node);
}

/**
 * add_node_begin - Add a new node to the beginning of a double circular
 * linked list
 * @list: list to be modify
 * @str: string to copy into the new node
 * Return: Address of the new node, or NULL on failure.
*/

List *add_node_begin(List **list, char *str)
{
	List *new_node = add_node_end(list, str);

	if (new_node == NULL)
	{
		return (NULL);
	}
	(*list) = new_node;
	return (new_node);
}
