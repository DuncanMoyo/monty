#include "monty.h"

/**
 * main - serves as the entry point
 * @argc: number of arguments in the array
 * @argv: aaray of arguments
 * Return: status of success or failure
 */

int main(int argc, char *argv[])
{
	const char *filename;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		return (EXIT_FAILURE);
	}
	char *filename = argv[1];

	read_data(filename);

	return (EXIT_SUCCESS);
}
