// (Phase Get Requirement) อยากให้สร้างโปรแกรมคำนวณพื้นที่สี่เหลี่ยม โดยรับกว้าง,ยาวทางแป้นพิมพ์และแสดงผลพื้นที่ที่คำนวณได้ทางหน้าจอ
 
// (Phase Analyst) input->กว้าง,ยาว | output->พท.สี่เหลี่ยม | process->พท.สี่เหลี่ยม = กว้าง*ยาว
 
// (Phase Design)
//#######################
//     Square Area
//#######################
//Input widths: <input>
//Input longs: <input>
//#######################
//Area of square is : <output>
//#######################
 
 
#include <stdio.h>
#define SENPA printf("######################\n");
 
int main(){
    float widths, longs, area_of_square;
 
    SENPA
    printf("    Square Area\n");
    SENPA
    printf("Input widths: ");
    scanf( "%f" , &widths);
    printf("Input longs: ");
    scanf( "%f" , &longs);
    SENPA
   
    area_of_square = widths * longs ;
 
    printf("Area of square is : %.4f\n", area_of_square);
    SENPA
 
    return 0;
 
}