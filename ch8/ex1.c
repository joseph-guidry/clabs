#include <stdio.h>

void average(int numbers[], int amount, double *avg);
int amt_of_numbers(int s[]);

int main(void)
{
	int amount, numbers[] = {1, 2, 3, 4, 5, 6};
	amount = sizeof(numbers)/sizeof(numbers[0]);
	double avg = 0.0;
	average(numbers, amount, &avg);
	printf("%.2f\n", avg);
		
}

void average(int numbers[], int amount, double *avg)
{
	int *px = numbers;
	for (px = numbers; px < (numbers + amount); px++)
		*avg += *px;
	*avg = *avg/amount;
}

