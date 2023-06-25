#include "monty.h"

/**
 * main - serves as the entry point
 * @argc: number of arguments in the array
 * @argv: aaray of arguments
 * return: status of success or failure
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr. "USAGE: monty file\n");
		return (EXIT_FAILURE);
	}

	const char *filename = argv[1];
	read_data(filename);

	return (EXIT_SUCCESS);
}
