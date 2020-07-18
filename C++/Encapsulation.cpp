#include<iostream>
using namespace std;
class add
{
public:
//constructor
add(int i=0)
{
    total=i;
}
    //interface to outside wold 
    void addnum(int num)
{
total=total+num;
}
    //interface to outside world 
    int gettotal()
    {
    return total;
};
    private:
    //hidden data from outside world
    int total;    
};
int main()
{
add a;
a.addnum(10);
a.addnum(10);
    a.addnum(30);
 cout<<"Total "<<a.gettotal()<<endl;
}