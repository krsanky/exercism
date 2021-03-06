#include <stdio.h>
#include <math.h>

#include "armstrong_numbers.h"

int
num_digits(int n)
{
	int		ds = 0;
	while (n != 0) {
		n /= 10;
		ds++;
	}
	return ds;
}

int
isArmstrongNumber(int n)
{
	int		d;
	int		sum = 0;
	int		nc = n;
	int		num_ds = num_digits(n);

	while (n != 0) {
		d = n % 10;
		sum += (int)pow(d, num_ds);
		n = n / 10;
	}

	return (nc == sum);
}
