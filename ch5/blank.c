#include <stdio.h>

#define XTIMES2  x + x

int main()
{
    int a, b, x = 5;
    
    a = XTIMES2;
    printf("%d", a);
    
    b = XTIMES2 * 3;
    printf("%d", b);
    
}
