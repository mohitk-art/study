#include<iostream>
using namespace std;
int chack_prime(int);
int main()
{
int i,n,result;
cin>>n;
    
    for(i=1;i<=n;i++)
{
result=chack_prime(i);
        if(result==1)
{
cout<<i<<endl;
            }
}
}
int chack_prime(int a)
{
int c;
for(c=2;c<=a-1;c++)
{
if(a%c==0)
        {
return 0;
}
}
    if(c==a)
{
return 1;
}
}