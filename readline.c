#include "shell.h"

/**
 * print_prompt - Prints a prompt
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
	char *temp_str = NULL, *token = NULL;

	char_num = getline(&temp_str, &input_size, stream);
	if (char_num != -1)
<<<<<<< HEAD
		token = _strt(temp_str, "\n");
=======
		token = strtok(temp_str, "\n");
>>>>>>> 5c87857a9b0a447d81b5375609949dd7e50db76b
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
