#include<iostream>
using namespace std;
class abc
{
 public:
    static int count;
   void read()
{
       count++;
      }
    void show()
    {
cout<<count;
}
    };
int abc::count=1;
int main()
{
    abc a,b;
    a.read();
    a.show();
    b.read();
  
}