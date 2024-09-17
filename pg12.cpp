//Functions
//call by value and call by Reference

#include<iostream>
// #include"adder.h"  // user defined file
using namespace std;

void lifeUp(int &life){
    ++life;
}
void lifeUp(int *life){
    ++(*life);
}

template<typename T> //template to create a data type

int addme(T a,T b){
    return a+b;
}
int main()
{
    int life=3;
    lifeUp(life);
    lifeUp(&life);
    cout<<life<<endl;

    int v1 =4;
    int v2 =2;
    float v3 =5.6;
    float v4 =7.5;
    cout<< addme(v3,v4)<<endl;
    return 0;
}