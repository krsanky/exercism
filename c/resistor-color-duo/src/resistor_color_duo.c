#include <sys/types.h>
#include <stdio.h>

#include "resistor_color_duo.h"

uint16_t
color_code(resistor_band_t bands[])
{
	return (uint16_t)bands[0] * 10 + (uint16_t)bands[1];
}
