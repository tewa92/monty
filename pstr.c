#include "monty.h"
/**
 * f_pstr - Prints the string starting at the top of the stack,
 * followed by a new line.
 * @head: Pointer to the head of the stack
 * @counter: Line number in the script
 * Return: No explicit return value
 */

void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
