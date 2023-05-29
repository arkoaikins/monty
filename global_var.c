#include "monty.h"

void l_numb_oper(void);

/**
 * operations - for the file manipulations
 * @ac: counts argument inputted
 * @av: counts the vector of the argument
 * Return: points to the file
 */
FILE *operations(int ac, char **av)
{
	FILE *fp;

	if (ac != 2)
	{
		dprintf(2, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	fp = fopen(av[1], "r");
	if (!fp)
	{
		dprintf(2, "Error: Can't open file %s\n", av[1]);
		exit(EXIT_FAILURE);
	}
	return (fp);
}


/**
 * l_numb_oper - the global variable function
 * Return: it is void returns nothing
 */
void l_numb_oper(void)
{
	monty.arg = NULL;
	monty.l_numb = 0;
	monty.stack = NULL;
}
