//  Generic Programming - sorting
// Generic programming - Searching

// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;

// int main()
// {
//     float numbers[6] ={3.3,2.4,6.9,4.3,7.8,9.6};

//     cout<<"Unsorted value"<<endl;
//     for(float n : numbers)
//     {
//         cout<<n<<" ";
//     }
    
//     // sort(numbers , numbers+6);
//     sort_heap(numbers, numbers+6);

//     if(binary_search(numbers, numbers+6, 7))
//     {
//         puts("Number found");
//     }else
//         puts("NUumber not found");


//     cout<<"\nSorted value"<<endl;
//     for(float n : numbers)
//     {
//         cout<< n <<" ";
//     }

//     return 0;
// }




// partition class

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> myints ={1,2,3,4,5,6,7,8,9,10};
    for (int x: myints){
        cout<<x <<" ";
    }   
    cout<<"\n";

    partition(begin(myints), myints.end(), [](auto x){return x%2==0;});  // make the partion of satisfied condition in begin

    for (int x: myints){
        cout<<x <<" ";
    }   
    cout<<"\n";

    return 0;
}