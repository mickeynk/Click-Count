#include <stdio.h>
#define mi printf("--------------------------------------------\n")
int main()
{
    char name[50];
    float loan;
    float interest;
    mi;
    printf("Calculate Loan Interest\n");
    mi;
    printf("Enter your name: ");
    scanf(" %[^\n]", name);
    printf("Enter your loan amount: ");
    scanf("%f", &loan);
    mi;
    if (loan >= 1000)
    {
        interest = loan * 0.025;
    }
    else
    {
        interest = loan * 0.055;
    }
    printf("Hello %s, the interest on your loan is %.2f\n", name, interest);
    mi;
}