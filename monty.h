#ifndef MONTY_H
#define MONTY_H

#define _POSIX_C_SOURCE 200809L
#define _GNU_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - oper_tion and its function
 * @oper_tion: the oper_tion
 * @f: function to handle the oper_tion
 *
 * Description: oper_tion and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *oper_tion;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct global_var - global variable for monty interpreter
 * @l_numb:number given to the element of the stack
 * @arg: arguments of the operations
 * @stack:points to the stack
*/
typedef struct global_var
{
	unsigned int  l_numb;
	char *arg;
	stack_t *stack;
} glob_var;

/* check if it is number */
int ifnumber(char *s);

FILE *operations(int ac, char **av);
void l_numb_oper(void);
void (*inst_c(char *oper_tion))(stack_t **, unsigned int);
/*this is the global variables used*/
extern glob_var monty;
glob_var monty;

/* prototypes of my function */
void push(stack_t **stack, unsigned int l_numb);
void pall(stack_t **stack, unsigned int l_numb);
void pint(stack_t **stack, unsigned int l_numb);
void pop(stack_t **stack, unsigned int l_numb);
void swap(stack_t **stack, unsigned int l_numb);
void add(stack_t **stack, unsigned int l_numb);
void nop(stack_t **stack, unsigned int l_numb);



#endif
