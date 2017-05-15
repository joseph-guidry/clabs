#include <stdio.h>

void stats(int *nums, int sz, double *mean, double *var);
void average(double *mean, int sz);
void variance(double *mean, int *nums, int sz,double *var);

int main()
{
    int size = 5; 
    int numbers[] = {1, 2, 3, 4, 5};
    double mean, var;
    
    stats(numbers, size, &mean, &var);
    
}

void stats(int *nums, int sz, double *mean, double *var)
{
	int *pnums = nums;
	for( pnums = nums; pnums < (nums + sz); pnums++){
		*mean += *pnums;
	}
	average(mean, sz);
	printf("Mean: %.2f\n", *mean);
	variance(mean, nums, sz, var);
}

void average(double *mean, int sz)
{
	*mean = *mean/sz;
}
void variance(double *mean, int *nums, int sz, double *var)
{
    int total;
	int *pnums = nums;
	for (pnums = nums; pnums < (nums + sz); pnums++){
		*var = (*pnums - *mean)*(*pnums - *mean);
		printf("Variance: %.2f\n", *var);
        total += *var;
	}
    printf("%d \n", total);
}


