#include "resistor_color.h"

int
colorCode(resistor_band_t c)
{
	return (int)c;
}

int	       *
colors()
{
	static int	cs[] = {
		BLACK,
		BROWN,
		RED,
		ORANGE,
		YELLOW,
		GREEN,
		BLUE,
		VIOLET,
		GREY,
		WHITE
	};

	return cs;
}
