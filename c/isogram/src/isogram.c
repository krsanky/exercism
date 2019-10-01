#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <assert.h>

#include "isogram.h"

bool
is_isogram(const char *phrase)
{
	int		length;
	int		i;
/*	int		letter_counts[26];*/
	char	*phr;

	length = strlen(phrase);
	assert((phr = malloc(length+1)) != NULL);

	for (i=0; i<length; i++) {
		printf("[%d]", phrase[i]);
		phr[i] = toupper(phrase[i]);
	}
	printf("\n");
	printf("phr:%s\n", phr);

	if (length > 100)
		return 1;

	printf("A:%d Z:%d\n", 'A', 'Z');
	free(phr);
	return 0;
}
