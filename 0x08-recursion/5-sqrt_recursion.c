#include "holberton.h"

/**
 * find_root - find square root of n, starting from the smallest possible, 0
 * @n: number to find root
 * @root: test this root
 * Return: square root of n, or -1 if not root
 */

int find_root(int n, int root)
{
	if (root * root > n)
		return (-1);

	if (root * root == n)
		return (root);

	return (find_root(n, root + 1));
}

/**
 * _sqrt_recursion - find  square root of n
 * @n: n
 * Return:  square root, or -1 if not root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (find_root(n, 0));
}
