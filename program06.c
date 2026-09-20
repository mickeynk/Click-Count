#include <stdio.h>
void showHi()
{
    printf("Hi\n");
}
void showHey()
{
    printf("Hey\n");
}

int main()
{
    showHi();

    printf("AAA\nBBBCCC");
    printf("\n\nDDD\tEEE\t\tFFF\n");
    printf("GGG   %d     HHH%f", 111, 999.555);
    printf("\t\t\t\tIII%s\n", "Wow Wow Wow");
    printf("%d ... %.2f ... \n%.10lf", 55, 1.987654, 123.5);
    printf("\n\n10 + %d = %d\n", 5, 10 + 5);

    showHey();

    return 0;
}