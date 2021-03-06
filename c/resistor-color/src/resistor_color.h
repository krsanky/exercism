#ifndef RESISTOR_COLOR_H
#define RESISTOR_COLOR_H

typedef enum {
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
}		resistor_band_t;

int		colorCode(resistor_band_t);

int	       *colors();

#endif
