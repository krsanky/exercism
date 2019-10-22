#include <sys/types.h>
#include <stdio.h>

#include "resistor_color_duo.h"

uint16_t
color_code(resistor_band_t bands[])
{
/*
   uint16_t actual = color_code((resistor_band_t[]){ BROWN, BLACK });
   TEST_ASSERT_EQUAL_UINT16(10, actual);
*/
	
	printf("sizeof bands:%lu\n", sizeof(&bands));
	return 0;
}

