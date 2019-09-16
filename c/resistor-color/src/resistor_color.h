#ifndef RESISTOR_COLOR_H
#define RESISTOR_COLOR_H

/*
   TEST_ASSERT_EQUAL_UINT16(0, colorCode(BLACK));
   TEST_ASSERT_EQUAL_UINT16(9, colorCode(WHITE));
   TEST_ASSERT_EQUAL_INT_ARRAY(expected, colors(), ARRAY_LENGTH(expected));
These colors are encoded as follows:

    Black: 0
    Brown: 1
    Red: 2
    Orange: 3
    Yellow: 4
    Green: 5
    Blue: 6
    Violet: 7
    Grey: 8
    White: 9

ics map the colors to the numbers, that, 
when stored as an array, happen to map to their index in the array: 
Better Be Right Or Your Great Big Values Go Wrong.  


*/

enum COLOR{BLACK, BROWN, RED, ORANGE, YELLOW, GREEN, BLUE, VIOLET, GREY, WHITE};
int colorCode(enum COLOR);

#endif
