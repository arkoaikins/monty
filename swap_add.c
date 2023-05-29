#include "monty.h"
/**
 * swap - The opcode swap swaps the top two elements of the stack
 * @stack:  points to the stack
 * @l_numb: number given to the element of the stack
 *  Return: it returns nothing (void)
*/
void swap(stack_t **stack, unsigned int  l_numb)
{
	stack_t *tmp;

	if (!(*stack) || !(*stack)->next)
	{
		dprintf(2, "L%u: can't swap, stack too short\n",  l_numb);
		exit(EXIT_FAILURE);
	}
	tmp = (*stack)->next;
	if (tmp->next)
	{
		(*stack)->next = tmp->next;
		tmp->next->prev = *stack;
	}
	else
		(*stack)->next = NULL;
	(*stack)->prev = tmp;
	tmp->next = *stack;
	tmp->prev = NULL;
	(*stack) = tmp;
}



/**
 * add - The opcode add adds the top two elements of the stack
 * @stack: points to the stack
 * @l_numb: number given to the element of the stack
 * Return: it returns nothing (void)
 */
void add(stack_t **stack, unsigned int l_numb)
{
	int i = 0;
	stack_t *tmp = NULL;

	tmp = *stack;

	for (; tmp != NULL; tmp = tmp->next, i++)
		;

	if (i < 2)
	{
		dprintf(2, "L%u: can't add, stack too short\n", l_numb);
		exit(EXIT_FAILURE);
	}
	tmp = (*stack)->next;
	tmp->n += (*stack)->n;
	pop(stack, l_numb);
}
