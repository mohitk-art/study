#include<iostream>
using namespace std;
class base
{
private:
    int a;
    public:
    base()
    {
    a=10;
    }
    virtual void show()=0;
    };

    class derived1:public base
{
int v;
    public:
    derived1()
    {
 v=20;
        }
        void show()
        {
        cout<<v<<endl;
        }
        };
class derived2:public base
{
int v;
    public:
    derived2()
    {
    v=2;
        }
        
    void show()
    {
        cout<<v;
        }
        };
int main()
{
base *p; //virtual derived class don't have an object
    derived1 d1;
    derived2 d2;
    p=&d1;
    p->show(); //20
    p=&d2;
    p->show(); //2
    }
        
