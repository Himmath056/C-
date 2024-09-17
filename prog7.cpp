// #include<iostream>
// using namespace std;
// int main()
// {
//     int rating = 4;

//     if(rating == 5)
//     {
//         printf("5 star rated\n");
//     }
//     else if(rating ==4){
//         printf("4 star rated\n");
//     }
//     else{
//         printf("Not 5 star rated\n");
//     }

//     if(true){
//         puts("Go for it\n");
//     }
//     printf("Your rating feedback is %s\n",rating>4 ? "true block ":"false block");

//     return 0;
// }

//program for rating feedback from the user and the rating is 1-5
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int rating;
    printf("Enter your rating that should be btw 1-5\n");
    cin>>rating;
    if(rating>0 && rating <=5)
    {
        if(rating==5)
            printf("Thank your For your feedback\n");
        else if(rating==4)
            puts("Thank you for your feedback we will improve next time");
        
        else if(rating==3)
            puts("Thank you for your feedback we will try to be better next time");
        
        else if(rating==2)
            puts("Sorry for the inconvinience Will do better next time");
        else 
            puts("Sorry for the dissatisfaction we will be better next time");    
    }
    else
        cout<< "The rating was not valid  \n";
    return 0;
}




// #include<iostream>
// using namespace std;
// int main()
// {
//     int rating =3;
//     switch (rating)
//     {
//     case 1: puts("Rated as 1 star ");
//             break;
//     case 2: puts("Rated as 2 star ");
//             break;
//     case 3: puts("Rated as 3 star ");
//             break;
//     case 4: puts("Rated as 4 star ");
//             break;
//     case 5: puts("Rated as 5 star ");
//             break;
//     default:puts("Enter a valid a rating btw 1-5");
//             break;
//     }
      
//     return 0;
// }


#include<iostream>
using namespace std;
int main()
{
    int my_numbers[]={4,5,6,7,8,9,0};
    int i=8;
    // while(i < 7)
    // {
    //     if(i==3){
    //         cout<<"Special thing"<<endl;
    //         i++;
    //         continue;
    //     }
    //     cout<<"Current number is "<<my_numbers[i]<<endl;
    //     i++;
    // }

    do
    {
        cout<<"Current number is "<<my_numbers[i]<<endl;
        i++;
    }while(i < 7);

    return 0;

}