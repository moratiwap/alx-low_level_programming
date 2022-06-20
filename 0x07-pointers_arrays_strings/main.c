#include "holberton.h"
#include <stdio.h>
/**
 * main - checks the code
 * Return: Always 0 (success)
 */
int main(void)
{
	char *s0 = "Anne Cognet";
		char *s1 = "Asias Palacios";

		printf("%s, %s\n", s0, s1);
		set_string(&s1, s0);
		printf("%s, %s\n", s0, s1);
		return (0);
}
