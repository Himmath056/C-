// #include<iostream>
// using namespace std;
// int main()
// {
//     printf("The size of the long is %d\n",sizeof(long double));

//     double  my_p_value =20.2 + 20.2;
  
//     if(my_p_value ==40.400000)
//         printf("The value is equal\n");
//     else
//         puts("The value is not equal\n");
//     printf("my P value is %1.20f \n",my_p_value);

//     return 0;
// }


// Divide by zero exception

#include<iostream>
using namespace std;
int main()
{
    char call_api =2.0;
    try
    {
        cout<<"trying to use API value\n";
        cout<<"Did some testing with api value\n";
        throw call_api;
        cout<<"NO code executed after return and throw\n";
    }
    catch(int x)
    {
        cout<<"Integer exception handle\n";
    } catch(float f)
    {
        cout<<"float exception handle\n";
    }catch(...){
        cout<<"Something went wrong\n";
    }
    cout<<"Keep on moving with the rest of the code"<<endl;
    return 0;
}