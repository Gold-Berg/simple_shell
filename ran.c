#include "shell.h"
/**
 * _strcat - concatenates strings
 * @string1: a string
 * @addition: an addition
 * @final_string: a final string
 * Return: int
 */

int _strcat(char *string1, const char *addition, char *final_string)
{
	char  *ptr;

	if (string1 == NULL || final_string == NULL)
		return (-1);
	ptr = final_string;
	while (*string1 != '\0')
	{
		*ptr = *string1;
		ptr++;
		string1++;
	}
	while (*addition != '\0')
	{
		*ptr = *addition;
		ptr++;
		addition++;
	}


}
