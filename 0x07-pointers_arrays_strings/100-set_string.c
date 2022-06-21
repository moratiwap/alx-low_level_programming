#include <stdio.h>
/**
 * set_string - set value of a pointer to char
 * @s: pointer to pointer changing
 * @to: pointer to what we setting
 */
void set_string(char **s, char *to)
{
	*s = to;
}
