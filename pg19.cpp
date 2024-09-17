// move semantics


#include<iostream>
#include<string>

using namespace std;

void swap(int &a,int &b)
{
    int temp=move(a);
    a=move(b);
    b=move(temp);

}
string printMe(){
    return " I am print";
}

int main()
{
    int a=2,b=4;

    swap(a,b);
    
    printf("The value of a =%d and  b=%d\n",a,b);

    // string s = printMe();
    string&& ss =printMe();  //move 
    printf("The value of printme is %s",ss);


    return 0;
}