#include <ctype.h>
#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: character to be checked
 *
 * Return: 1 if true and 0 if false
 */
int _isupper(int c)
{
	int result = isupper(c);

	if (result == 0)
		return (0);
	else
		return (1);

}
