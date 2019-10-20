#include <string.h>
#include <stdio.h>
#include <ctype.h>

#include "isogram.h"

bool
is_isogram(const char *phrase)
{
	unsigned long	i, phrasel;
	int		letter_counts[26] = {0};
	char		u;

	if (phrase == NULL)
		return false;
	phrasel = strlen(phrase);
	if (phrasel == 0)
		return true;

	for (i = 0; i < phrasel; i++) {
		u = toupper(phrase[i]);
		if (isalpha(u)) {
			if (letter_counts[u - 'A'] > 0)
				return false;
			letter_counts[u - 'A']++;
		}
	}

	return true;
}
