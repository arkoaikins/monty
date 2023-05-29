#include "monty.h"

int ifnumber(char *s);

/**
 * push - the opcode push pushes an element to the stack
 * @stack: points to the stack
 * @l_numb: number given to the element of the stack
 *  Return: it returns nothing (void)
*/
void push(stack_t **stack, unsigned int  l_numb)
{
	stack_t *node1;
	int status;

	node1 = malloc(sizeof(size_t));
	if (!node1)
	{
		dprintf(2, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	if ((ifnumber(monty.arg) == -1) || !monty.arg)
	{
		dprintf(2, "L%u: usage: push integer\n",  l_numb);
		exit(EXIT_FAILURE);
	}
	status = atoi(monty.arg);
	node1->n = status;
	node1->next = NULL;
	node1->prev = NULL;

	if (!(*stack))
	{
		(*stack) = node1;
		return;
	}
	node1->next = (*stack);
	(*stack)->prev = node1;
	(*stack) = node1;
}

/**
 * pall - prints all the values on the stack, starting from the top
 * @stack: points to the stack
 * @l_numb:number given to the element of the stack
 * Return: it returns nothing (void)
*/
void pall(stack_t **stack, unsigned int  l_numb)
{
	stack_t *tmp;
	(void) l_numb;

	tmp = *stack;
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
		if (!(isdigit(s[i])))
			return (-1);
		i++;
	}
	return (1);
}
