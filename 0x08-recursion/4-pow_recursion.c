/**
 * _pow_recursion - find the value of x to the power y
 * @x: int to multiply
 * @y: ower to multiply to
 * Return: value of x to power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	return (x * _pow_recursion(x, y - 1));
}
