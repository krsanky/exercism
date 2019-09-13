#include <stdio.h>
#include <math.h>

#include "armstrong_numbers.h"

/* not used */
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
	int		i = 1;
	int		d;
	int		sum = 0;
	int		nc = n;
	int		num_ds = num_digits(n);

	while (n != 0) {
		d = n % 10;
/*
		printf("i:%d handle %d\n", i, d);
		printf("%d ^ %d = %d\n", d, num_ds, (int)pow(d,num_ds)); 
*/
		sum += (int)pow(d,num_ds); 
		n = n / 10;
		i++;
	}
/*	printf("sum:%d\n", sum);*/
	return (nc == sum);
}
