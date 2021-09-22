/**
 * add - adds two numbers
 * @a: first number
 * @b: second number
 * Return: sum of the numbers
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - subtracts two numbers
 * @a: first number
 * @b: second number
 * Return: difference of the two numbers
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - multiplies two numbers
 * @a: first number
 * @b: second number
 * Return: product of the two numbers
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - divides two numbers
 * @a: first number
 * @b: second number
 * Return: result of the division
 */
int div(int a, int b)
{
	if (b != 0)
		return (a / b);
	return (0);
}

/**
 * mod - calculates the modulus for remainder
 * @a: first number
 * @b: second number
 * Return: result
 */
int mod(int a, int b)
{
	return (a % b);
}
