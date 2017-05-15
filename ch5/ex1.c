#include <stdio.h>

int main()
{
    int c;
    
    while((c = getchar()) != EOF)
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
            putchar(c);
}
