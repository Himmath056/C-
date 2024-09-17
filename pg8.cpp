// #include<iostream>
// using namespace std;
// int main()
// {
//     int my_nums[]={2,3,4,5,6};
    
//     for(int i=0;i<5;i++){ //normal loop
//         cout<<my_nums[i]<<endl;
//     }
//     cout<<"Get a Break\n";

//     for (int i:my_nums){// for range loop
//         cout<<i<<endl;
//     }
//     return 0;
// }


#include<iostream>
using namespace std;
int main()
{
    char my_strings[]="himmath";
    char my_name[]={'h','i','m','m','a','t','h',0};
    printf("My name is %s\n",my_strings);
    printf("My name is %s\n",my_name);

    cout<<"TAke a Break\n";
    for(int i=0;my_name[i]!=0;i++){
        cout<<"character is "<<my_name[i]<<endl;
    }
    cout<<endl;
    for(char *cp=my_name; *cp!=0 ;cp++){
        cout<<"character is "<<*cp<<endl;
    }

for(char i:my_strings){
    if(i==0) break;
    cout<<"char is :"<<i<<endl;
}

    return 0;
}


