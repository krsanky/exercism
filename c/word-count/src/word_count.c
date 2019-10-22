#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "word_count.h"

int
word_index(char *word, word_count_word_t * words, int nwords)
{
	int 		i;
	for (i = 0; i < nwords; i++)
		if (strcmp(word, words[i].text) == 0)
			return i;
	return -1;
}

void
zero_words(word_count_word_t * words)
{
	int 		i = 0;
	for (i = 0; i < MAX_WORDS; i++) {
		words[i].count = 0;
		words[i].text[0] = '\0';
	}
}

void
clean_word(char *w)
{
	char           *t;
	int 		i        , l, tidx = 0;

	l = strlen(w);
	t = malloc(l + 1);
	assert(t != NULL);
	t[0] = '\0';

	for (i = 0; i < l; i++) {
		if (isalnum(w[i])) {
			t[tidx++] = w[i];
			t[tidx] = '\0';
		}
	}
	strlcpy(w, t, l+1);

	free(t);
}

int
word_count(const char *input_text, word_count_word_t * words)
{
	int 		idx;
	int 		nwords = 0;
	unsigned long 	l;
	char           *found;
	char           *in;

	zero_words(words);
	in = strdup(input_text);
	assert(in != NULL);

	l = sizeof(words);

	while ((found = strsep(&in, " ,\n")) != NULL) {
		/* 'found' can be modified as long as it's not longer
		 * It is freed when 'in' is freed.
		 */
		clean_word(found); 
		if (strcmp("", found) == 0)
			continue;
		if ((idx = word_index(found, words, nwords)) == -1) {
			strlcpy(words[nwords].text, found, MAX_WORD_LENGTH + 1);
			words[nwords++].count = 1;
		} else if (strcmp(found, "") != 0) {
			words[idx].count++;
		}
	}

	free(in);
	return nwords;
}
