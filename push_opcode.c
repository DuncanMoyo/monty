#include "monty.h"

/**
 * push - pushes an element to the stack
 * @stack: a double pointer to the stack
 * @line_number: line number of the current opcode
 */

void push(stack_t **stack, unsigned int line_number)
{
	char *arg;
	int val;
	stack_t *new_element;

	arg = strtok(NULL, " \t\n");

	if (arg == NULL)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	val = atoi(arg);
	new_element = malloc(sizeof(stack_t));

	if (new_element == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_element->n = val;
	new_element->prev = NULL;
	new_element->next = *stack;

	if (*stack != NULL)
	{
		(*stack)->prev = new_element;
	}

	*stack = new_element;
}
