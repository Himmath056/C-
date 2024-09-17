//Object Oriented Programming

#include<iostream>
#include<string>
using namespace std;
//classes are kept in a seperate file and then adden in the main file
class User{
// private:                                           //by default not accessible
    int _secret =22;                                    // default is private 

public:                                             // accessible by all
    string name ="default";
    void classMessage();
    void setSecret(const int & newsceret){ _secret = newsceret; }
    int getSecret()const;
};

void User::classMessage(){                              //to define that this is not a stand alone 
    cout<<"Class is great "<< name<<endl;               // method but the part  of the class
}
int User::getSecret()const{ 
    return _secret; 
}

int main()
{
    User sam;
    sam.name ="Sam";
    sam.classMessage();
    sam.setSecret(322);
    cout<<"The secret value is :"<<sam.getSecret()<<endl;

    User himmath;
    himmath.classMessage();
    himmath.name="himmath";
    himmath.classMessage();

    const User rock;
    cout<<rock.getSecret() <<endl;

    User peter = sam;  
    cout<< peter.getSecret()<<endl;

    return 0;
}