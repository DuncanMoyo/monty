#include "monty.h"

/**
 * read_data - reads the file
 * @filename: the name of the file
 */

void read_data(const char *filename)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t read;
	unsigned int line_number = 0;
	stack_t *stack = NULL;

	FILE *file = fopen(filename, "r");

	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}

	while ((read = getline(&line, &len, file)) != -1)
	{
		line_number++;
		process_line(line, line_number, &stack);
	}
	free(line);
	free_stack(stack);
	fclose(file);
}
