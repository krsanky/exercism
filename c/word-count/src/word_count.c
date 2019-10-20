#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "word_count.h"

/*
define MAX_WORDS 20
define MAX_WORD_LENGTH 50
typedef struct word_count_word {
   char text[MAX_WORD_LENGTH + 1];
   int count;
} word_count_word_t;
*/

int
word_index(char *word, word_count_word_t * words, int nwords)
{
	int 		i;
	for (i = 0; i < nwords; i++)
		if (strcmp(word, words[i].text) == 0)
			return i;
	return -1;
}

int
word_count(const char *input_text, word_count_word_t * words)
{
	int 		idx      , nwords = 0;
	unsigned long 	l;
	char           *found;
	char           *in;

	in = strdup(input_text);
	assert(in != NULL);

	l = sizeof(words);

	while ((found = strsep(&in, " ")) != NULL) {
	/* && nwords <= MAX_WORDS */
		if ((idx = word_index(found, words, nwords)) == -1) {
			strlcpy(words[nwords].text, found, MAX_WORD_LENGTH + 1);
			words[nwords].count = 0;
			nwords++;
		} else {
			words[idx].count++;
		}
	}

	free(in);
	return nwords;
}
