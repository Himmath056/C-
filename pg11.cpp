//Structures struct

// #include<iostream>
// #include<string>
// using namespace std;

// struct User{
//     const int uid;
//     const char *name;
//     const char *email;
//     int course_count;
//     string item;
// };

// int main()
// {   
//     User mickey ={001,"mickey","mickey@cartoon.com",2,"pink"};
//     User donald ={001,"donald","donald@cartoon.com",3};

//     User *d =&donald;
//     cout<<mickey.item<<endl;
//     // donald.uid=4;
//     donald.course_count =4;
//     donald.email ="ddonald@toon.com";
//     cout<<mickey.email<<endl;

//     d->course_count=12;
//     cout<<d->course_count;

    
//     return 0;
// }



// enums

// #include<iostream>
// #include<string>
// using namespace std;
// #define PI 3.14

// enum MsOffice : int8_t{//type casting along way
//     BOLD=5,
//     ITALICS =1,// for the forst value is 0 and then increment will take place
//     UNDERLINE =0,
//     CLOSSED,
// };

// int main()
// {   
//     int myAttributes =UNDERLINE;
//     cout<<myAttributes<<endl;
    
    
//     return 0;
// }



//auto type

// #include<iostream>
// #include<string>
// #include<typeinfo>
// using namespace std;
// string api_call(){
//     return "got some data from web\n"; 
// }
// int another_api_call(){
//     return 5; 
// }
// int main(){
//     auto response =api_call();  // auto is used to auto identify the type
//     auto rep =another_api_call();

//     cout<< "API CALL VALUE :"<<rep<<endl;
//     cout<< "API CALL VALUE :"<<response;

//     if (typeid(response) == typeid(string))
//     {
//         puts("Both are of same data type string ");
//     }
//     if (typeid(rep) == typeid(int))
//     {
//         puts("Both are of same data type int ");
//     }
     
//     return 0;
// }


// stack and heap memory
//stack- satck has predefined size ,fast
//Heap- predefined but can frow  ,not that fast


#include<iostream>
 struct User{
    const int id;
    int age;

    User() : id(001), age(22){}
 };
int main(){
    using namespace std; 
    //stack
    int score =100;
    User mike;


    //heap
    int *heap_score = new int;
    *heap_score =200;

    User *mike =new User();

    delete heap_score;
    // delete mike;
    
    return 0;
}