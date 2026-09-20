#include<stdio.h>
#define tee printf("+++++++++++++++++++++++++++\n")
int main()
{
    double high,longs,width,gallon,area;
    tee;
    printf("Gallon App:\n");
    tee;
    printf("Enter the height of the room: ");
    scanf("%lf",&high);
    printf("Enter the Lenght of the room: ");
    scanf("%lf",&longs);
    printf("Enter the width of the room: ");
    scanf("%lf",&width);
    tee;
    area = (width*longs)+(width*high*2)+(longs*high*2);
    gallon = area / 2.75;
    printf("The number of gallons needed to paint the room is: %.2lf\n",gallon);
    return 0;
}