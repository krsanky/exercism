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
word_index(word_count_word_t * words, int nwords)
{
	int	i;
	printf("^^^\n");
	for (i=0; i<nwords; i++) {
		printf("find word:%s\n", words[i].text);
	}
	printf("+++\n");
	return -1;
}

int
word_count(const char *input_text, word_count_word_t * words)
{
	int		idx, nwords = 0;
	unsigned long 	l;
	char           *found;
	char           *in;

	in = strdup(input_text);
	assert(in != NULL);

	l = sizeof(words);

	while ((found = strsep(&in, " ")) != NULL) {
		if ((idx = word_index(words, nwords)) == -1) {
			strlcpy(words[nwords].text, found, MAX_WORD_LENGTH+1);
			nwords++;
		} else {
			words[idx].count++;
		}
	}

	free(in);
	return 1;
}



