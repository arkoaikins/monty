#include "monty.h"

/**
 * pint - The opcode pint prints the value at the top of the stack
 *        followed by a new line.
 * @stack: points to the stack
 * @l_numb: line number of bytecode file
 * Return: it returns nothing(void)
 */

void pint(stack_t **stack, unsigned int l_numb)
{
	if (*stack == NULL)
	{
		dprintf(2, "L%u: can't pint, stack empty\n", l_numb);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}

/**
 * pop - The opcode pop removes the top element of the stack.
 * @stack: points to the stack
 * @l_numb: line number of bytecode file
 * Return:It returns nothing(void)
*/
void pop(stack_t **stack, unsigned int l_numb)
{
	stack_t *tmp;

	if (*stack == NULL)
	{
		dprintf(2, "L%u: can't pop an empty stack\n", l_numb);
		exit(EXIT_FAILURE);
	}
	tmp = *stack;
	if (!(*stack)->next)
		*stack = NULL;
	else
		*stack = (*stack)->next, (*stack)->prev = NULL;
	free(tmp);
}
