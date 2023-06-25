#include "monty.h"

/**
 * read_data - reads the file
 * @filename: the name of the file
 */

void read_data(const char *filename)
{
	FILE *file_ptr = fopen(filename, "r");
	char *current_line = NULL;
	size_t line_length = 0;
	ssize_t read_length;
	unsigned int current_line_num = 1;

	if (!file_ptr)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}

	while ((read_length = getline(&current_line, &line_length,
					file_ptr)) != -1)
	{
		if (current_line[read_length - 1] == '\n')
		{
			current_line[read_length - 1] == '\0';
		}
		current_line_num++;
	}
	free(current_line);
	fclose(file_ptr);

}
