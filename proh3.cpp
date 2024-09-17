// #include<iostream>
// #include<string>
// #include<cstdio>
// using namespace std;
// int main(){
// 	int number;
// 	string color;
//     cout<<"Enter the Name of your favourite color\n";
// 	getline(cin,color);
// 	puts("Enter the NUmber\n");
// 	cin>>number;ṇṇ
// 	printf("The NUmber is %d ",number+3);
// 	cout<<"The fovourite color is "<<color;
// 	puts("Enter the NUmber\n");
// 	cin>>number;
	 
// 	return 0;
// }

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string firstName, lastName;
    cout<< "Enter your first name"<<endl;
    getline(cin,firstName);
    cout<< "Enter your Last Name"<<endl;
    getline(cin,lastName);
    cout<<"Hi your first name is "<<firstName<<" and Last name is "<<lastName<<endl;
    return 0;
} 