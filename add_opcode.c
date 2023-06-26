#include "monty.h"

/**
 * add - entry point
 * @stack: pointer to a pointer to the stack
 * @line_number: line number of the current opcode
 */

void add(stack_t **stack, unsigned int line_number)
{
	int top_value, next_value;
	stack_t *top_element;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n"
				, line_number);
		exit(EXIT_FAILURE);
	}

	top_value = (*stack)->n;
	next_value = (*stack)->next->n;

	(*stack)->next->n = top_value + next_value;

	top_element = *stack;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;

	free(top_element);
}
