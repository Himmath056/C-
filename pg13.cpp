//Functional pointers

// #include<iostream>
// using namespace std;

// int getTwo(){
//     return 2;
// }

// void interesting(){
//     puts("I am interesting");
// }
// int main()
// {
//     int whatIgot=getTwo();

//     void (*pointsToInteresting)() = interesting;
//     cout<<whatIgot<<endl;

//     pointsToInteresting();
//     (*pointsToInteresting)();
//     return 0;
// }



//Null pointer

// #include<iostream>
// #define NULL 0

// void printval(int a){
//     printf("Integer value is %d\n",a);
// }
// void printval(double a){
//     printf("Double value is %f\n",a);
// }
// void printval(int *a){
//     printf("Pointer value is %p\n",a);
// }
// int main()
// {
//     printval(nullptr);
//     return 0;
// }


//Recursion
 
// #include<iostream>
// using namespace std;
// int factorial(int n);
// int main()
// {
//     //Factorial :5*4*3*2*1
//     //Factorial :1*2*3*4*5
//     int n;
//     cout<<"Enter a value :"<<endl;
//     cin>>n;

//     cout<<"Your result for factorial is: "<<factorial(n)<<endl;
//     return 0;
// }

// int factorial(int n){
//     if(n>1){
//         return n * factorial(n-1);
//     }
//     else 
//         return 1;
// }




// Macro 
// #include<iostream>
// #define END return 0  //macro -it can be also a long string
// #define ENDMESSAGE cout<<":program ends here\n"
// #define LCOINT int32_t
// #define LCCPCC const char* const
// #define console_log(a)  cout<<a<<endl
// using namespace std;

// int main()
// {
    
//     LCOINT score=4;
//     console_log(score);

//     string name ="Himmath";
//     console_log(name);

//     ENDMESSAGE;
//     END;
// }



// Viriyadics - ...
//here  it uses recursion
#include<iostream>
#include<string>
using namespace std;

template<typename T>
void fun(T t){
    cout<<"One function"<<t<<endl;
}

template<typename T,typename... Args>
void fun(T t,Args... args){
    cout<<"Two Functions"<<t<<endl;
    fun(args...);
}
int main()
{
    string  myName ="Himmath";
    fun(myName);
    fun(1);

    fun(1,2,3,4,4.5,myName);
    return 0;
}
