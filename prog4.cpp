// #include<iostream>
// using namespace std;
// int main()
// {
//     int life;
//     life=4;
//     int card;
//     card =40;
//     int my_card =card;

//     int *myp;
//     myp = &my_card;
//     my_card =*myp; //pointer deref
//     printf("The value of card is :%d\n",my_card);//to print its value
//     printf("The value of card is :%d\n",myp);//to print the refernce address
//     printf("The value of card is :%d\n",&my_card);//its address
//     printf("The value of card is :%d\n",*myp);//the referenced addreess value
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main()
// {
//     int score =200;
//     int *myp=&score;

//     printf("Value of score is %d\n",score);
//     printf("Value of pointer is %d\n",myp);

//     int &another_score =score;//this variable called reference And can be used to chane the  value of referenced variable
//     another_score =800;

//     printf("Value of score is %d\n",score);
//     printf("Value of pointer is %d\n",myp);
//     printf("Value of pointer is %d\n",another_score);
//     printf("Value of pointer is %d\n",&another_score);
//     return 0;

// }