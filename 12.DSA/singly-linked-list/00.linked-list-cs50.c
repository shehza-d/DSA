#include <stdio.h>

typedef struct node {
	int value;
	struct node *next;
} node;

int main(void)
{
	node *list = NULL;

	node *n = malloc(sizeof(node));
	if (n == NULL)
	{
		return 1;
	}
	n->value = 5;
	n->next = list;

	list = n;




	char c = 'f'; // char is single char
	// printf() displays the string inside quotation
	printf("Hello World by Shehzad!\n");

	while (1)
	{
		printf("Hello World by Shelhzad!\n");
	}

	return 0;
}
