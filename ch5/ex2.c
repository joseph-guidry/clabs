#include <stdio.h>

#define XTIMES2  x + x

int main()
{
    int c;
    
    while((c = getchar() ) != EOF)
        if ( c == '\n')
            printf("\n");
}
