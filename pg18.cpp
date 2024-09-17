// Polymorphism 
// #include<iostream>
// #include<string>
// using namespace std;

// class One{
// public:
//     virtual void intro(){   //virtual solve ambiguity issues of pointer 
//         cout<<" I am One\n";
//     }
// };

// class Two : public One{
// public:
//     void intro(){
//         cout<<"I am Two\n";
//     }
// };

// class Three : public One{
// public:
//     void intro(){
//         cout<<"I am Three";
//     }
// };

// int main()
// {
//     One *a;
//     Two b;
//     Three c;

//     a =&b;
//     a->intro();

//     a =&c;
//     a->intro();

//     return 0;
// }






// Unique pointer

#include<iostream>
#include<string>
#include<memory>
using namespace std;

class User{
public:
    User(){
        cout<<"User created\n";
    }
    ~User(){
        cout<<"User destroyed\n";
    }

    void testFun(){
        cout<<"I am a test  Function\n ";
    }
};

int main()
{
    {
        // unique_ptr<User> sam(new User()); //non fav 

        unique_ptr<User> sam = make_unique<User>();
        sam->testFun();

        // unique_ptr<User> samnn= sam;  NOT ALLOWED
    }

    {
        // shared_ptr<User> tim(new User());
        shared_ptr<User> tim = make_shared<User>();   // shared pointer
        weak_ptr<User> wtim =tim;
        shared_ptr<User> timm = tim;

    }

    cout<<"Outside the code\n";

    return 0;
}



