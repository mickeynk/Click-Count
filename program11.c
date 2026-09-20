#include <stdio.h>
#define tee printf("+++++++++++++++++++++++++++\n")
int main()
{
    int high;
    char name[50];
    float weight,bmi;
    tee;
    printf("BMI App:\n");
    tee;
    printf("Enter your name: ");
    scanf(" %[^\n]", name);
    printf("Enter your height in centimeters: ");
    scanf("%d",&high);
    printf("Enter your weight in kilograms: ");
    scanf("%f",&weight);
    tee;
    bmi = (weight/(high*high))*10000;
    printf("Your BMI is: %.2f\n", bmi);
    tee;
    return 0;
}