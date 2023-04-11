#include "main.h"

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (words) and NULL on failure
 */
char **strtow(char *str)
{
	char **words, *newWord;
	int w_count = 0, start_of_word, prev_word;
	unsigned long int i;

	if (!str || !strlen(str))
		return (NULL);

	/* allocate same length as initial string */
	words = malloc(2 * strlen(str) * sizeof(char));

	start_of_word = 0;
	for (i = 0; i < strlen(str); i++)
	{
		/* find when a word begins */
		if (i > 0 && str[i - 1] == ' ' && str[i] != ' ')
		{
			prev_word = start_of_word;
			start_of_word = i;
		}

		/* the last is a space */
		if ((i + 1) == strlen(str) && prev_word > start_of_word)
			return (words);

		/* find when a word ends */
		if ((i + 1) == strlen(str) ||
(str[i] == ' ' && i > 0 && str[i - 1] != ' '))
		{
			/* call function to create the word */
			newWord = form_word(str, start_of_word, i);
			*(words + w_count) = newWord;
			w_count++;
			prev_word = i;
		}
	}
	return (words);
}

/**
 * form_word - forms a null-terminated word given length & parent string
 * @string: string containing word
 * @start_idx: idx within @string where word starts
 * @end_idx: idx within @string where word ends
 * Return: the word formed, NULL on fail
 */
char *form_word(char *string, int start_idx, int end_idx)
{
	int len = end_idx - start_idx, i;
	char *word;

	word = malloc(len * sizeof(char) + 1);
	if (word)
	{
		for (i = 0; i < len; i++)
			*(word + i) = *(string + start_idx + i);
		/* terminate word */
		*(word + i) = '\0';
	}
	return (word);
}
