#include "main.h"

/**
 * string_troupper - changes all lowercase letters to uppercase
 *@str: string to be changed
 * Returns: address to the string
 */

char *string_troupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
