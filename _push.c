#include "monty.h"

/**
 * _push - pushed an element to the stack
 *
 * @head: head of the stack_t
 * @arg: int
 *
 * Return: void
 */
void _push(stack_t **head, int arg)
{
	stack_t *new;
	stack_t *current;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new->n = arg;
	new->prev = NULL;
	new->next = NULL;
	current = *head;
	while (current)
	{
		if (current->next == NULL)
		{
			current->next = new;
			new->prev = current;
			*head = new;
			return;
		}
		current = current->next;
	}
	*head = new;
}
