#include <stdio.h>  // ใช้สำหรับ printf

int main(){
    //ประกาศตัวแปร
    char nameInitial = 'B';      //ตัวอักษรแรกของชื่อ
    int age = 18;                //อายุเป็นจำนวนเต็ม
    float weight = 53.5;         //น้ำหนักแบบทศนิยม
    char gender[] = "Male";      //เพศ ใช้เป็นข้อความ

    //แสดงผลลัพธ์
    printf("nameInitail = %c\n", nameInitial);
    printf("age = %d\n", age);
    printf("weight = %.1f\n", weight);  // %.1f แสดงทศนิยม 1 ตำแหน่ง
    printf("gender = %s\n",gender);
}