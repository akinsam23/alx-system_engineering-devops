#include "main.h"

int check_pal(char*s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: reverse string
 * 
 * Return: 1 if it is and 0 if it is not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the string's length
 * @s: string to calculate the length of
 *
 * return : length of the string
 */

int _strlen_recursion (char *s)
{
	if (*s == "\0")
		return (0);
	return (1 + strlen_recursion(s + 1));
}

/**
 * check_pal - checks i he characters recursively for palindrome
 * @s: string to check
 * @i: iterator
 * @len: strings length
 *
 * Return: 1 if is a palindome and 0 if not.
 */

int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);

	if (i >= len)
		return(1);
	return(check_pal(s,i+1, len -1)
}
