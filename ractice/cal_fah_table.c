#include <stdio.h>

/* print Celsius-Fahrenheit Table for cel = 0, 20, ... , 300 */

int main()
{
	{
		printf("Celsius-Fahrenheit Table\n");
	}
	{
		float cel, fahr;
		int lower, upper, step;

		lower = 0;
		upper = 300;
		step = 20;

		cel = lower;
		while (cel <= upper)
		{
			fahr = ((cel * (9.0/5.0)) + 32.0);
			printf("%3.0f %6.1f\n", cel, fahr);
			cel = cel + step;
		}
	}
}
