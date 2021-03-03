#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * analyze -check if  is palindrome
 * @head1: pointer to the head of the linked list
 * @head2: pointer to the head of the linked list
 * Return: 1 (palindrome) || 0
 */
static int analyze(listint_t **head1, listint_t *head2)
{
	int result;
	int a;
	int b;

	if (head2 == NULL)
		return (1);

	a =  analyze(head1, head2->next);
	b = ((*head1)->n == head2->n);
	result = a && b;

	(*head1) = (*head1)->next; /* head[+1] */

	return (result);
}
/**
 * is_palindrome - checks if a linked list with int is a palindrome
 * @head: head pointer to the linked list
 * Return: 1 (palindrome) || 0
 */
int is_palindrome(listint_t **head)
{
	if (head == NULL || *head == NULL)
		return (0);
	return (analyze(head, *head));
}
