#include "monty.h"

/**
 * process_line - entry point
 * @line: the line
 * @line_number: the current line number of the opcode
 * @stack: pointer to a pointer to the stack
 */

void process_line(char *line, unsigned int line_number, stack_t **stack)
{
	char *opcode, *argument;

	if (line[strlen(line) - 1] == "\n")
		line[strlen(line) - 1] == '\0';

	opcode = strtok(line, " \t\n");
	argument = strtok(NULL, " \t\n");

	if (opcode == NULL || opcode[0] == '#')
		return;

}
