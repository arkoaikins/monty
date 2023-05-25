#include "monty.h"

/**
 * swap - The opcode swap swaps the top two elements of the stack.
 * @stack: points to the stack
 * @l_numb: line number of the bytecode file
 * Return: it returns nothing (void)
 */

void swap(stack_t **stack, unsigned int l_numb)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		dprintf(2, "L%u: can't swap, stack too short\n", l_numb);
		exit(EXIT_FAILURE);
	}

	stack_t *tmp = *stack;
	(*stack)->prev = (*stack)->next;
	(*stack)->next = (*stack)->next->next;
	(*stack)->prev->prev = NULL;
	(*stack)->prev->next = tmp;
	tmp->prev = (*stack)->prev;
	tmp->next = *stack;
	*stack = (*stack)->prev;
}

/**
 * add - The opcode add adds the top two elements of the stack.
 * @stack: points to the stack
 * @l_numb: line number of the bytecode file
 * Return: it returns nothing (void)
 */

void add(stack_t **stack, unsigned int l_numb)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		dprintf(2, "L%u: can't add, stack too short\n", l_numb);
		exit(EXIT_FAILURE);
	}

	(*stack)->next->n += (*stack)->n;
	pop(stack, l_numb);
}

