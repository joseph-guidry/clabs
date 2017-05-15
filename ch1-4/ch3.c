#include <stdio.h>
#define ISEVEN(X) ((X) % 2) ? printf("and odd\n") : printf("and even\n")
#define ISPOSITIVE(X) ((X) < 0) ? printf("is negative ") : printf("is positive ")
void is_positive(int x){if (x == 0) printf(" ");else ISPOSITIVE(x);}int main(void){for (int i = -4; i <= 4; i++){printf("%2d ", i);is_positive(i);ISEVEN(i);}}

