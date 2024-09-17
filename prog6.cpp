#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    // 1bytr is equal to 8 bits
    printf("Size of this data type char is %ld bits\n",sizeof(char )*8);
    printf("Size of this data type int is %ld bits\n",sizeof(int )*8);
    printf("Size of this data type float is %ld bits\n",sizeof(float )*8);
    printf("Size of this data type double is %ld bits\n",sizeof(double )*8);
    printf("Size of this data type void is %ld bits\n",sizeof(void )*8);
    int num=0x16;
    num=0b10001010;
    printf("Fun value is %d\n",num);
    return 0;

}