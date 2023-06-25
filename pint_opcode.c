#include "monty.h"

/**
 * pint - entry point
 * @stack: pointer to a pointer to the stack
 * @line_number: line number of te current opcode
 */

void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
