#include "main.h"

/**
 * is_palindrome - checks if string is palindrome using recursion
 * @s: string to check
 * Return: 1 if palindrome else 0
 */
int is_palindrome(char *s)
{
	return (palindrome_helper(s, strlen(s) - 1));
}

/**
 * palindrome_helper - recursively reduce/compare string to find palindrome
 * @s: potential palindrome string
 * @last_index: index of opposite/mirror of current character in string
 * Return: 1 or 0
 */
int palindrome_helper(char *s, int last_index)
{
	if (last_index < 1)
		return (1);
	if (s[0] != s[last_index])
		return (0);
	last_index -= 2;

	return (palindrome_helper(&s[1], last_index));
}
