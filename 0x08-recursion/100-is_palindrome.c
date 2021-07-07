#include "holberton.h"

/**
 * char_compare - compare the first and last indices for match
 * @left: index starting from the left of the string
 * @right: index starting from the right of the string
 * Return: 1 if palindrome, 0 otherwise
 */

int char_compare(char *left, char *right)
{
	if (left >= right)
		return (1);
	if (*left == *right)
		return (char_compare(left + 1, right - 1));

	return (0);
}

/**
 * str_length - find length of the string
 * @s: string input
 * Return: string length
 */

int str_length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + str_length(s + 1));
}

/**
 * is_palindrome - checks if string is palindrome
 * @s: string to be checked
 * Return: 1 if palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int len = str_length(s);

	return (char_compare(s, (s + len - 1)));
}
