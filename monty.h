#ifndef __MONTY_H
#define __MONTY_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int num_line);
} instruction_t;

/*Function for opcode*/
void _push(stack_t **stack, unsigned int num_line);
void _pall(stack_t **stack, unsigned int num_line);
void _pint(stack_t **stack, unsigned int num_line);
void _pop(stack_t **stack, unsigned int num_line);
void _swap(stack_t **stack, unsigned int num_line);

#endif /*_MONTY_H*/