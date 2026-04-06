#include <ctype.h>
#include <string.h>
#include <stdio.h>

int hash(char *word);

int main (void) {
	char buffer[100];
	scanf("%s", buffer);

	char *word = buffer;
	printf("Hash value: %i\n", hash(word));
}


int hash(char *word) {
	
	char c = toupper(word[0]);
	if (word == NULL || strlen(word) == 0 || !isalpha(c)) 
		return -1;

	return c - 'A';
}
