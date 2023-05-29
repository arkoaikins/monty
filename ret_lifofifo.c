#include "monty.h"

/**
 * inst_c - where the operations are computed
 * @oper_tion: takes command for files
 * Return: reuturn NULL if not func
*/
void (*inst_c(char *oper_tion))(stack_t **, unsigned int)
{
	int i = 0;

	instruction_t list_ofoper_tion[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{NULL, NULL},
	};

	while (list_ofoper_tion[i].oper_tion)
	{
		if (strcmp(oper_tion, list_ofoper_tion[i].oper_tion) == 0)
			return (list_ofoper_tion[i].f);
		i++;
	}
	return (NULL);
}
