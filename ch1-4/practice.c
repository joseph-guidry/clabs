#include <stdio.h>


int right_triangle(int a, int b, int hypotenuse)
{
   a *= a, b *= b, hypotenuse *= hypotenuse;
   return (a + b) == hypotenuse ? 1 : 0;
}

int main(void)
{
    int side1 = 3, side2 = 4, side3 = 5;
    
    printf("Side 1: %d, Side 2: %d, Side 3: %d are ", side1, side2, side3);
    if (right_triangle(side1, side2, side3) == 0) printf("NOT ");
 
    printf("the sides of a right triangle.\n");
}
