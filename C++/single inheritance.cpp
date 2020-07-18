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

 //derived class
class employee:public person
{
private:
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

int main()
{
    employee e1;
e1.show();
    e1.read();
e1.show();
}