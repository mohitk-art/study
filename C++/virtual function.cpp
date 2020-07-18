/*1. Abstraction
2. pointer to object
3. polymorphism
4. Dynamic Binding
5. Upcasting
6. heirarchy inheritance
*/
#include<iostream>
using namespace std;
class father
{
public:
virtual void display()
{
cout<<"father\n";
}
};
class child1:public father
{
public:
void display()
{
cout<<"child1\n";
}};

class child2:public father
{
public:
void display()
{
cout<<"child2";
}};

int main()
{
father *f;
child1 c1;
child2 c2;
f=&c1;     /*Dynamic binding /Run time binding /late binding /upcasting */
f->display();
f=&c2;
f->display();
}