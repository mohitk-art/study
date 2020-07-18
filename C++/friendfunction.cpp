#include<iostream>
using namespace std;

//class 1
class alpha
{
private:
int data1;
public:
void readdata()
{
cout<<"Enter alpha ";
        cin>>data1;
        }
    friend void showsum();
    };

   //class 2
 class beta
{
private:
int data2;
public:
void readdata()
{
    cout<<"enter beta ";
        cin>>data2;
        }
        friend void showsum();
    }; 

//out of classes
 void showsum()
{
alpha a;
    beta b;
    a.readdata();
    b.readdata();
    cout<<"sum = "<<a.data1+b.data2;
    }          

int main()
{
 showsum(); 
    }