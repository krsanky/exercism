#include "resistor_color.h"

int
colorCode(resistor_band_t c)
{
	return (int)c;
}

int *
colors() 
{
	static int arr[] = {1,2,3};
	return arr;
}

