#include "main.h"
#include <string.h>

/**
 * puts2 -> puts2 function
 * @s: str parameter
 */
void put2(char *str)
{
	int len, i;

	len = strlen(str);
	for (i = 0; i < len; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
