// This operator use for self referrence 

#include<iostream>
using namespace std;

class Rectangle{
    double _length;
    double _breadth;
public:
    Rectangle(double l=2.0, double b=2.0){
        _length=l;
        _breadth=b;
    }
    double Area(){
        return _length * _breadth;
    }

    int compare(Rectangle rectangle){
        return this->Area() > rectangle.Area();
    }
};

int main()
{
    Rectangle h1(3.0, 3.0);
    Rectangle h2(4.0, 4.0);
    
    if( h1.compare(h2)){
        cout<<"H2 is smaller"<<endl;
    }else{
        cout<<"H2 is Bigger"<<endl;
    }

    return 0;
}