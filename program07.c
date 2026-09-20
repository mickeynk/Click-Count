// อยากให้สร้างโปรแกรมคำนวณเงินที่จะหารกันว่าหารกันคนละกี่บาทโดยป้อนจำนวนเงิน และจำนวนคนทางแป้นพิมพ์ และแสดงผลทางหน้าจอ
 
// Input-> เงิน, คน | Process เงินที่หารกันคนละกี่บาท = เงิน / คน | Output-> เงินที่หารกันคนละกี่บาท
 
//----------------------
//   American Share
//----------------------
//Input money: <input>
//Input person: <input>
//----------------------
//Pay money/person: <output> Bath
//----------------------
 
#include <stdio.h>
#define LINEPA printf("----------------------------\n");
 
int main(){
    double  money, money_share;
    int  person;
 
    LINEPA
    printf("       American Share\n");
    LINEPA
    printf("Input money: ");
    scanf( "%lf" , &money);
    printf("Input person: ");
    scanf( "%d" , &person);
    LINEPA
 
    money_share = money / person;
 
    printf("Pay money/person: %.2lf\n", money_share);
    LINEPA
 
    return 0;
}