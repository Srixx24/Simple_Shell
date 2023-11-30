#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - gives command line with prompt $ and reads imput
 * from user infinitely until user presses ctr-d
 *
 * Return: 0 on successful execution
 */

int main(void)
{
	char *buffer;
	size_t size = 51;
	ssize_t ch;

	buffer = malloc(size * sizeof(char));
	if (buffer == NULL)
	{
		perror("Error");
		return (1);
	}
	while ((ch = getline(&buffer, &size, stdin)) != 1)
	{
		printf("$ ");
	}

	free(buffer)
	return (0);
}
/**
 * parse - 
 *
 * @imput:
 */
void parse(char *imput)
{
	char *token;
	char delims[] = " :/";

	token = strtok(imput, delims);

	while (token != NULL)
	{
		printf("%s\n" token);
	token =strtok(NULL, delims);
	}
}