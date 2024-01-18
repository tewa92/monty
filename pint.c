#include "monty.h"
/**
 * f_pint - Prints the top element of the stack.
 * @head: Pointer to the head of the stack
 * @counter: Line number in the script
 * Return: No explicit return value
 */

void f_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
