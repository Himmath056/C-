// Standard Template Librarry (STL)

// #include<iostream>
// #include<string>
// using namespace std;

// template <typename T>
// T getBigger(T a,T b){
//     return (a>b)? a:b;
// }

// int main()
// {
//     cout <<getBigger('e','f');
//     return 0; 
// }




// Functors

#include<iostream>
#include<string>
using namespace std;

class MyFloat{
    float ft;
public:
    MyFloat(){
        ft=0.1;
    }
    void getValue(){
        cout<< ft <<endl;
    }
    void operator () (float v){
        ft += v;
    }
};
int main()
{
    MyFloat floaty;
    floaty.getValue();

    floaty(0.1);
    floaty.getValue();

    floaty(1.1);
    floaty.getValue();


    return 0; 
}