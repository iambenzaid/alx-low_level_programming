#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Return the sum of two numbers
 * @a: First number
 * @b: Second number
 *
 * Return: Sum of the two numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Return the difference between two numbers
 * @a: First number
 * @b: Second number
 *
 * Return: The difference of the two numbers.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Return the product of two numbers
 * @a: First number
 * @b: Second number
 *
 * Return: The product of the two numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Returns the division of two numbers
 * @a: First number
 * @b: Second number
 *
 * Return: The quotient of the two numbers
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Returns the modulus of the division of two numbers.
 * @a: First number
 * @b: Second number
 *
 * Return: The mod of the division of the two numbers
 */
int op_mod(int a, int b)
{
	return (a % b);
}
