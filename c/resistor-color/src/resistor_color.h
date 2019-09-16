#ifndef RESISTOR_COLOR_H
#define RESISTOR_COLOR_H

/*
 * Black: 0 Brown: 1 Red: 2 Orange: 3 Yellow: 4 Green: 5 Blue: 6 Violet: 7
 * Grey: 8 White: 9
 *
 * Better Be Right Or Your Great Big Values Go Wrong.
 */

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
