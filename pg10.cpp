//Functions 


// #include<iostream>
// using namespace std;
// // void sayhello();
// void sayhello(){
//     cout<<"Hello there\n";
    
// }
// int saytwo(){
   
//     return 2;
// }
// void saythree(){
//    puts("3\n");
// }

// int main()
// {
//     sayhello();
//     printf("%d\n",saytwo()+2);
//     saythree();
//     return 0;
// }



//Linkers
//qualifiers-modification qualifier and life duration qualifiers
// modification qualifier - const ,volatile, mutable
// life duration qualifiers -static ,register ,extern


//static example

// #include<iostream>
// using namespace std;
// int lifeUp(){
//     static int life=3;
//     return ++life;
// }

// int main(){
//     int life =3;
//     cout<<"Your starting game life is "<<life<<endl;

//     life= lifeUp();
//     printf("Your updated game life is %d\n",life);

//     life= lifeUp();
//     printf("Your updated game life is %d\n",life);


//     return 0;
// }



// mathematical operatioons


// #include<iostream>
// using namespace std;
// int main(){
//     int life = 3;
//     int points =4;

//     int score =2;
//     score = score +points;
//     score += points;

//     if (life != 0)
//     {
//         puts("Into the If block");
//     }
//     cout<<score;
//     return 0;
// }


//Logical Operations

// #include<iostream>
// using namespace std;
// int main(){
//     bool isfbuser =true;
//     bool isGoogleuser =true;
//     bool isAdmin =false;

//     if((isfbuser || isGoogleuser) && isAdmin)
//     {
//         puts("welcome admin");
//     }else{
//         puts("No admin access!");
//     }

//     if(isfbuser || isGoogleuser){
//         puts("Welcome user");
//     }
    

//     return 0;
// }




//BITS wise operation

// #include<iostream>
// using namespace std;
// int main(){
//     unsigned int x = 10;
//     unsigned int y = 9;

//     unsigned int z  =x<<1;
//     unsigned int z  =x>>1;
//     unsigned int z  =x&y;
//     unsigned int z  =x|y;
//     unsigned int z  =x && y;
//     unsigned int z  =x || y;
//     unsigned int z  =x ^ y;
 
//     cout<<"The value of Z is : "<<z<<endl;
//     return 0;
// }



// dynamic memory allocation and error handling
#include<iostream>
using namespace std;
int main(){
    int *myp;

    // myp  =new[nothrow] int [4090]; 
    try
    {
        myp= new int [100];
        cout<<"Memory Space allocated"<<endl;
    }
    catch(const std::exception& e)
    {
         cout<<"False to llocate memory Space "<<endl;
    } 

    int x=5;
    x << 3; 

    delete [] myp;
    return 0;
}