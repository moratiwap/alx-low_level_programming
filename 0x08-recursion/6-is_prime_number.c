/**
 * prime_check - check if int is prime
 * @n: int to check
 * @f: int to check against
 * Return: 1 if prime, 0 Otherwise
 */
int prime_check(int n, int f)
{
	if (n % f == 0 && f != (n / 2))
		return (0);
	else if (f >= (n / 2))
		return (1);
	else
		return (prime_check(n, f + 1));
}
/**
 * is_prime_check - find if given int is prime
 * @n: int to check
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n > 1)
		return (prime_check(n, 2));
	else if (n < 0)
		return (0);
	return (0);
}
