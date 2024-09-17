// // Lamda use

// #include<iostream>
// #include<string>


// using namespace std;

// int main()
// {
//     []{cout<<"Hello Learn from youtube";}();

//     [](){return 100;};

//     auto sum =[](auto a,auto b){return a+b;};   //generalized lamda

//     cout<<"Sum of 2 and 5 is :" <<sum(2,5)<<endl;
//     cout<<"Sum of 2.5 and 5.5 is :" <<sum(2.5,5.5)<<endl;

//     string a= "abc";
//     string b= "def";
//     cout<<sum(a,b)<<endl;
//     return 0;
// }






// File handling

// #include<iostream>
// #include<string>


// using namespace std;

// int main()
// {
   
//    static const char * originalfile ="originalfile.txt";
//    static const char * editedfile ="edited.txt";

// //  rename(originalfile,editedfile);
//     remove(editedfile);

// //  FILE * fh =fopen(originalfile, "w");
// //  fclose(fh);

//     return 0;
// }






#include<iostream>
#include<string>

constexpr int maxbuffer =1024;
using namespace std;

int main()
{
   
   const char * filename ="mythisfile.txt";
   const char * information ="lorem ipsum dolor sit amet";

//    FILE * fh =fopen(filename, "w");

//    for(int i=0;i<50;++i)
//    {
//     fputs(information, fh);
//    }
//    fclose(fh);

    char buf[maxbuffer];

    FILE * fh =fopen(filename, "r");
    while(fgets(buf,maxbuffer,fh)){
        fputs(buf,stdout);
    }
    fclose(fh);

    return 0;
}