#include "monty.h"

/**
 * main - interprets bytecode
 *
 * @ac: counts argument inputted
 * @av: counts the vector of the argument
 * Return: Zero(0) if sucess,else return error
 */
int main(int ac, char **av)
{
	ssize_t note;
	const char DELIM[3] = " \t\n";
	FILE *fp;
	size_t n = 0;
	char *point_line = NULL, *oper_tion;
	void (*func)(stack_t **, unsigned int);

	fp = operations(ac, av);

	while ((note = getline(&point_line, &n, fp) != -1))
	{
		monty.l_numb++;
		oper_tion = strtok(point_line, DELIM);
		if (oper_tion)
		{
			func = inst_c(oper_tion);
			if (!func)
			{
				dprintf(2, "L%d: unknown instruction %s\n", monty.l_numb, oper_tion);
				exit(EXIT_FAILURE);
			}
			monty.arg = strtok(NULL, DELIM);
			func(&monty.stack, monty.l_numb);
		}
	}
	free(point_line);
	fclose(fp);
	return (0);
}
