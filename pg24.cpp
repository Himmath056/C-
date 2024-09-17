// Containers in STL
// vectors , list , Queuess

// #include<iostream>
// #include<algorithm>
// #include<vector>
// #include<string>

// using namespace std;

// int main()
// {
//     vector<int> nums;
//     vector<string> heros {"batman","flash", "superman", "robin"};

//     nums.push_back(5);
//     nums.push_back(6);
//     nums.push_back(7);
//     nums.push_back(8);
//     for(int i=0;i<=5;++i)
//     {
//         nums.push_back(i);
//     }

//     cout<< nums.size()<< endl<<nums.capacity()<< endl<<nums.max_size()<<endl;

//     cout<<nums.empty()<<endl;

//     for(auto i =nums.begin();i!=nums.end(); ++i)
//     {
//         cout<< *i ;
//     }

        // return 0;
// }





// lists

// #include<iostream>
// #include<algorithm>
// #include<list>
// #include<string>

// using namespace std;

// int main()
// {
//     list<int> mylist ;

//     for(int i =3;i<10;++i){
//         mylist.push_back(i);
//     }
//     cout<<mylist.front()<<endl;
//     cout<<mylist.back()<<endl;

//     mylist.pop_back();

//     mylist.reverse();
    
//     for(auto i :mylist){
//         cout<<i<<" ";
//     }
//     cout<<"\n";
    
//     mylist.sort();
//     for(auto i :mylist){
//         cout<<i<<" ";
//     }

//     return 0;
// }


// Queues

#include<iostream>
#include<algorithm>
#include<queue>
#include<string>

using namespace std;

int main()
{
    queue<int> myq ;

    myq.push(10);
    myq.push(12);
    myq.push(14);
    myq.push(16);

    cout<<myq.front()<<endl;
    cout<<myq.back()<<endl;

    myq.pop();
    cout<<myq.front()<<endl;

    while(!(myq.empty())){
        cout<<" "<<myq.front();
        myq.pop();
    }

    cout<<"\n "<<myq.front()<<endl;
    

    priority_queue<int> mypq;

    mypq.push(10);
    mypq.push(40);
    mypq.push(50);
    mypq.push(5);
    while(!(mypq.empty())){
        cout<<" "<<mypq.top();
        mypq.pop();
    }
    cout<<"\n";


    return 0;
}
