#include <string.h>
#include <stdio.h>
#include <ctype.h>

#include "isogram.h"

bool
is_isogram(const char *phrase)
{
	unsigned long	i;
	int		letter_counts[26] = {0};
	char		u;

	if (phrase == NULL)
		return false;
	if (strlen(phrase) == 0)
		return true;

	for (i = 0; i < strlen(phrase); i++) {
		u = toupper(phrase[i]);
		if ((u >= 65) && (u <= 90)) {
			if (letter_counts[u - 65] > 0)
				return false;
			letter_counts[u - 65]++;
		}
	}

	return true;
}
