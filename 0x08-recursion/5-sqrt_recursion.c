/**
 * sqrt_check - find square root
 * @n: number to find square rot of
 * @c: number checked to see if it's a sqrt of n
 * Return: sqrt value
 */
int sqrt_check(int n, int c)
{
	if (c * c == n)
	{
		return (c);
	}
	else if (c >= n / 2)
		return (-1);
	return (sqrt_check(n, c + 1));
}

/**
 * _sqrt_recursion - find the sqrt of given number
 * @n: number given to find sqrt for
 * Return: sqrt or -1 if there is no natural square
 */
int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	return (sqrt_check(n, 1));
}
