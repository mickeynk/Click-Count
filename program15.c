#include <stdio.h>
 
// ตัวอย่างการทำงานของ if-else
int main(){
    int score = 70;
 
    printf("Hi hi hi\n");
 
    if(score >= 80){
        printf("Grade A\n");
    }else if(score >= 70){
        printf("Grade B\n");
    }else if(score >= 60){
        printf("Grade C\n");
    }else if(score >= 50){
        printf("Grade D\n");
    }else{
        printf("Grade F\n");
    }
 
    printf("Wow wow wow\n");
 
    return 0;
}