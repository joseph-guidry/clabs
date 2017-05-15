#include <stdio.h>


double bmi_calc(double weight, int height)
{    
    return ((weight / 2.20462) )/ ((height * 0.0254) * (height * 0.0254));
}

int main()
{
    int height = 57, weight = 140;
    //double bmi;
    
    double bmi = bmi_calc((double)weight, height);
    
    printf("BMI is %.2f\n", bmi);
    if (bmi < 18.5)
        printf("Underweight\n");
    else if (bmi < 24.9)
        printf("Normal\n");
    else if (bmi < 29.9)
        printf("Overweight\n");
    else
        printf("Obese\n");
}
