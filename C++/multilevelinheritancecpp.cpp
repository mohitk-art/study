#include<iostream>
using namespace std;
class person
{
protected:
    char name[20];
    int age;
public:
person()
    {
    strcpy(name,"");
    age=0;
}
    void read()
{
    cout<<"Enter name & age ";
    cin>>name>>age;
}
    
void show()
{
cout<<"name = "<<name;
cout<<"\nage = "<<age;
    }
};

 //derived class & base class or intermediate  class
class employee:public person
{
protected:
int eno;
    float salary;
    public:
employee()
    {
eno=0;
    salary=0.0;
}
    
void read()
{
        person::read();
cout<<"\nEnter eno & salary ";
cin>>eno>>salary;
}
    
void show()
{
person::show();
        cout<<"\neno = "<<eno;
cout<<"\nsalary = "<<salary<<endl;
}
};

//derived class
class manager:public employee
{
private:
int experience;
    public:
    manager():employee()
    {
    experience=0;
}
    void read()
{
employee::read();
        cout<<"Enter experience ";
        cin>>experience;
}
    
    void show()
{
employee::show();
cout<<"experience = "<<experience<<endl;
}
};
int main()
{
manager m1,m2;
    m1.show();
    m2.read();
m2.show();
}