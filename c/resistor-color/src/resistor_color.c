#include "resistor_color.h"

int
colorCode(resistor_band_t c)
{
	if (c) {
		return 7;
	}
	return 3;
}

int *
colors() 
{
	static int arr[] = {1,2,3};
	return arr;
}

