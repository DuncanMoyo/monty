#include "monty.h"

/**
 * pall - prints all the elements, starting from the last entered
 * @stack: pointer to a pointer to a stack
 * @line_number: line number of the current node
 */

void pall(stack_t **stack, unsigned int line_number)
{
	(void)line_number;

	stack_t *current = *stack;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
