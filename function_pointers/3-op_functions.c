#include "3-calc.h"
/**
 * op_add - add numbers
 * @a: first operand
 * @b: second operand
 *
 * Return - result of operations on operands
 */
int op_add(int a, int b) { return (a + b); }
/**
 * op_sub - substracts numbers
 * @a: first operand
 * @b: second operand
 *
 * Return - result of operations on operands
 */
int op_sub(int a, int b) { return (a - b); }
/**
 * op_mul - multiplies numbers
 * @a: first operand
 * @b: second operand
 *
 * Return - result of operations on operands
 */
int op_mul(int a, int b) { return (a * b); }
/**
 * op_div - divided numbers
 * @a: first operand
 * @b: second operand
 *
 * Return - result of operations on operands
 */
int op_div(int a, int b)
{
	if (b == 0)
		return (0);
	return (a / b);
}

/**
 *
 * op_mod - modulus between numbers
 * @a: first operand
 * @b: second operand
 *
 * Return - result of operations on operands
 */
int op_mod(int a, int b)
{
	if (b == 0)
		return (0);
	return (a % b);
}
