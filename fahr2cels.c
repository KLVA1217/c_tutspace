#include <stdio.h>

// this is a single line comment

/*
print Fahreneit-Celcius Table for fahr = 0, 20, ..., 300
*/

int main()
{
	int fahr, celc;
	int lower, upper, step;

	lower = 0; /* lower limit of temperature table */
	upper = 300; /* upper limit */
	step = 20; /* step size */

	fahr = lower;
	while(fahr <= upper )
	{
		celc = 5 * (fahr-32) / 9;
		printf("%3d\t%3d\n", fahr, celc); // The %3's dicate the width. Not sure how much the value impacts the width.
		fahr = fahr + step;
	}
}
