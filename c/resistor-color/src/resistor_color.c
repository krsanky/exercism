#include "resistor_color.h"

int
colorCode(enum COLOR c)
{
	if (c) {
		return 7;
	}
	return 3;
}
