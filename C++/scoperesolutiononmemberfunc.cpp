/* How a member function can be accessed out side  the class with the help of scope resolution operator. */
#include<iostream>
using namespace std;
class distence
{
int feet;
float inches;
public:
distence()
    {
feet=0;
        inches=1.0;
}
    
void read()
    {
cout<<"Enter feet and inches ";
cin>>feet>>inches;
}
    void show();    
};

//outside to class and main
void distence::show()
{
cout<<"Feet= "<<feet<<endl;
cout<<"inches= "<<inches<<endl;
}

int main()
{
distence d1,d2;
    d1.read();
    d1.show();
d2.show();
}