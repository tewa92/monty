#include "monty.h"
/**
 * f_pall - Prints the stack.
 * @head: Pointer to the head of the stack
 * @counter: Not used
 * Return: No explicit return value
 */

void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
