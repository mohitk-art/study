#include<iostream>
using namespace std;
int main()
{
  int a,b,n;
    cin>>n;
    for(a=1;a<=n;a++)
    {
        for(b=a;b<=n;b++)
        {
            cout<<" ";
        }
        cout<<"*";
        for(b=1;b<=a*2-1;b++)
        {
        cout<<" ";
    }
        cout<<"*";
        for(b=n*2-1;b>=a*2-1;b--)
        {
        cout<<" ";
            
    }
        cout<<"*";
        for(b=1;b<=a*2-1;b++)
        {
        cout<<" ";
    }
        cout<<"*"<<endl;
    }
    
}