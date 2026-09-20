#include <stdio.h>

int main()
{
    char name[50];
    int carnumber,hour;
    double rent;
    printf("Enter your name: ");
    scanf("%s",name);
    printf("Enter your car number: ");
    scanf("%d",&carnumber);
    printf("Enter the number of hours: ");
    scanf("%d",&hour);
    if(hour<=5)
    {
        rent = hour * 100;
    }
    else if(hour<=10)
    {
        rent = hour * 90.50;
    }
    else if(hour<=15)
    {
        rent = hour * 80;
    }
    else
    {
        rent = hour * 70.50;
    }
    printf("Rent for %d hours is: %.2f\n", hour, rent);
    return 0;
}