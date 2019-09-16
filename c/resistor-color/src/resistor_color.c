#include "resistor_color.h"

int
colorCode(resistor_band_t c)
{
	return (int)c;
}

int	       *
colors()
{
	static int	arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	return arr;
}
