#include "shell.h"

/**
 * print_prompt - Prints a prompt
 *
 *
 * return: void
 */

void print_prompt(void)
{
	char *prompt = "$ ";

	write(STDOUT_FILENO, prompt, 2);
}

/**
 * readline - reads a line from stdin
 *
 * @str: string to store read line in
 * @stream: The file to rad input frtom
 *
 * Return: int: number of read chars on success | -1 on failure
 */

int readline(char **str, FILE *stream)
{
	int char_num;
	size_t input_size;
	char *temp_str = NULL, *token = NULL, *ss = NULL;

	char_num = getline(&temp_str, &input_size, stream);
	if (char_num != -1)
		token = __strt(temp_str, "\n", &ss);
	if (token != NULL)
	{
		*str = malloc(30);
		if (*str == NULL)
			return (char_num);
		_strcpy(*str, token);
	}
	free(temp_str);
	return (char_num);
}
