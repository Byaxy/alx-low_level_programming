#include "holberton.h"

/**
 * substr_match - check if substring matches s1 after wildcard
 * @s1: first string
 * @s2: second string
 * @after_wldcd: placeholder for position after wildcard
 * Return: 1 if matched, 0 otherwise
 */

int substr_match(char *s1, char *s2, char *after_wldcd)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == '\0' && *s2 == '*')
		return (substr_match(s1, s2 + 1, s2 + 1));
	if (*s1 == '\0' && *s2 != '\0')
		return (0);
	if (*s2 == '*')
		return (substr_match(s1, s2 + 1, s2 + 1));
	if (*s1 == *s2)
		return (substr_match(s1 + 1, s2 + 1, after_wldcd));
	else
		return (substr_match(s1 + 1, after_wldcd, after_wldcd));
}

/**
 * wildcmp - compare if string matches wildcard
 * @s1: string one
 * @s2: string two
 * Return: 1 if matched 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	else if (*s2 == '*')
		return (substr_match(s1, (s2 + 1), (s2 + 1)));
	else
		return (0);
}
