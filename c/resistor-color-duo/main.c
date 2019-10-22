#include <stdio.h>

#include "src/resistor_color_duo.h"

int
main()
{
	uint16_t cc1 = color_code((resistor_band_t[]){ BROWN, BLACK });
	printf("cc1:%d\n", cc1);

	return 0;
}
