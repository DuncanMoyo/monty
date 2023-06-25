#include "monty.h"

/**
 * pop - entry point
 * @stack: pointer to a pointer to the stack
 * @line_number: line number of the current opcode
 */

void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *top_element;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n"
				, line_number);
		exit(EXIT_FAILURE);
	}

	top_element = *stack;
	*stack = (*stack)->next;

	if (*stack != NULL)
	{
		(*stack)->prev = NULL;
	}
	free(top_element);
}
