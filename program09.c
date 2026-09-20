#include <stdio.h>
#define senpa printf("+++++++++++++++++++++++++++\n")

int main()
{
    int number1, number2, number3, number4, number5, sum;
    float average;
    senpa;
    printf("sum & average numbers\n");
    senpa;
    printf("Input number 1: ");
    scanf("%d", &number1);
    printf("Input number 2: ");
    scanf("%d", &number2);
    printf("Input number 3: ");
    scanf("%d", &number3);
    printf("Input number 4: ");
    scanf("%d", &number4);
    printf("Input number 5: ");
    scanf("%d", &number5);
    sum = number1 + number2 + number3 + number4 + number5;
    average = sum / 5.0;
    senpa;
    printf("sum = %d\n", sum);
    printf("average = %.2f\n", average);
    return 0;
}