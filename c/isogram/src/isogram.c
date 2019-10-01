#include "isogram.h"
#include "string.h"

bool
is_isogram(const char phrase[])
{
	int length = strlen(phrase);
	if (length > 100)
		return 1;
	return 0;
}

