#include "monty.h"
#include <ctype.h>

int ifnumber(char *s);

/**
 * push - the opcode push pushes an element to the stack
 * @stack: points to the stack
 * @l_numb: number given to the element of the stack
 * Return: it returns nothing (void)
 */
void push(stack_t **stack, unsigned int l_numb)
{
	char *input;
	int not_int;
	stack_t *node1;

	node1 = malloc(sizeof(stack_t));
	if (!node1)
	{
		dprintf(STDERR_FILENO, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	input = strtok(NULL, " ");
	not_int = ifnumber(input);

	if (not_int == -1)
	{
		dprintf(STDERR_FILENO, "L%u: usage: push integer\n", l_numb);
		exit(EXIT_FAILURE);
	}

	node1->n = atoi(input);
	node1->next = NULL;
	node1->prev = NULL;

	if (*stack == NULL)
	{
		*stack = node1;
	}
	else
	{
		node1->next = *stack;
		(*stack)->prev = node1;
		*stack = node1;
	}
}

/**
 * pall - prints all the values on the stack, starting from the top
 * @stack: points to the stack
 * @l_numb: number given to the element of the stack
 * Return: it returns nothing (void)
 */
void pall(stack_t **stack, unsigned int l_numb)
{
	(void)l_numb;
	stack_t *tmp = *stack;

	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}

/**
 * ifnumber - check for number
 * @s: the string to check for a number
 * Return: 1 if it is a number, else -1
 */
int ifnumber(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (!isdigit(s[i]))
			return (-1);
		i++;
	}
	return (1);
}

