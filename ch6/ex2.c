#include <stdio.h>

long power(int base, int exponent);

int main()
{
    int a = 4, b = 4;
    printf("End: %ld\n", power(a, b));
}

long power(int base, int exp)
{
	long total = 1;
	for (int i = 0; i < exp; i++)
		total *= base;
	return total;
}
