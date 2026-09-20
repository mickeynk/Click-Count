#include <stdio.h>
#define SEN_PA printf("+++++++++++++++++++++++\n")

// ส่วนของ Global  Declaration
int number =555;
void showHi();

// ส่วนของ user-defined function
void showHey(){
    printf("Hey.....\n");
}

// ส่วนของ Main Function
int main(){
    showHey();
    printf("Hello....\n");
    showHi();
    return 0;
}

// ส่วนของ user-defined function
void showHi(){
    printf("Hi.....\n");
}