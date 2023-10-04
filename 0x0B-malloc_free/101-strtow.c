#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words.
 */

int count_words(char *str)
{
	int count = 0;
	int is_word = 0;

	while (*str)
	{
		if (*str == ' ' || *str == '\t' || *str == '\n')
		{
			is_word = 0;
		}
		else if (is_word == 0)
		{
			is_word = 1;
			count++;
		}
		str++;
	}
	return (count);
}

/**
 * allocate_words - Allocates memory for the array of words.
 * @num_words: The number of words.
 *
 * Return: A pointer to the allocated array or NULL on failure.
 */

char **allocate_words(int num_words)
{
	char **words = (char **)malloc((num_words + 1) * sizeof(char *));

	if (words == NULL)
	{
		return (NULL);
	}
	return (words);
}

/**
 * split_string - Splits the string into words and stores them in the array.
 * @str: The input string.
 * @words: The array to store the words.
 *
 * Return: 1 on success, 0 on failure.
 */

int split_string(char *str, char **words)
{
	int word_index = 0;
	int word_length = 0;
	int is_word = 0;
	char *start = str;

	while (*str)
	{
		if (*str == ' ' || *str == '\t' || *str == '\n')
		{
			if (is_word)
			{
				words[word_index] = (char *)malloc
					((word_length + 1) * sizeof(char));
				if (words[word_index] == NULL)
				{
					return (0);
				}
				strncpy(words[word_index], start, word_length);
				words[word_index][word_length] = '\0';
				word_index++;
				word_length = 0;
				is_word = 0;
			}
		}
		else if (is_word == 0)
		{
			start = str;
			word_length = 1;
			is_word = 1;
		}
		else
		{
			word_length++;
		}
		str++;
	}
	if (is_word)
	{
		words[word_index] = (char *)malloc((word_length + 1) * sizeof(char));
		if (words[word_index] == NULL)
		{
			return (0);
		}
		strncpy(words[word_index], start, word_length);
		words[word_index][word_length] = '\0';
		word_index++;
	}
	words[word_index] = NULL;

	return (1);
}

/**
 * strtow - Splits a string into words.
 * @str: The input string to be split.
 *
 *
 * Return: A pointer to an array of strings (words) or NULL on failure.
 * Each element of the array contains a single word, null-terminated.
 * The last element of the array is NULL.
 */

char **strtow(char *str)
{
	int num_words = count_words(str);
	char **words = allocate_words(num_words);

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}

	if (words == NULL)
	{
		return (NULL);
	}
	if (!split_string(str, words))
	{
		int i;

		for (i = 0; i < num_words; i++)
		{
			free(words[i]);
		}
		free(words);
		return (NULL);
	}
	return (words);
}
