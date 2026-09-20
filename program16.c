#include <stdio.h>
 
#define SENPA  printf("**********************************\n");
 
int main(){
    int bus_number;   // ใช้ %d
 
    SENPA
    printf("       Check Bus Information\n");
    SENPA
    printf("Enter Bus Number : ");
    scanf("%d", &bus_number);
    SENPA
 
    switch( bus_number ){
        case 57: printf("Go to Pinklo, Bangkunon\n");
                 break;
        case 3: printf("Go to Sanamlong, Ladprao\n");
                 break;
        case 71: printf("Go to Hua Lam Pong, Yaowarat\n");
                 break;
        case 56: printf("Go to Banglamphu, Saphan Krung Thon\n");
                 break;
        case 539: printf("Go to Anusawari Chai, Sam Sen\n");
                 break;
        default: printf("Do not have bus information\n");
    }
 
    SENPA
 
    return 0;
}