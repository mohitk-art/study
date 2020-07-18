#include<iostream>
using namespace std;
int main()
{
int n,rev=0,temp;
cin>>n;            //spose, n=12
    temp=n;
while(temp!=0)
    {
rev=rev*10;      //rev= 0*10 = 0
rev=rev+temp%10; //rev= 0+12%10 =1.2
    temp=temp/10;//temp= 12/10=1.2
}
    if(n==rev)
{
cout<<n<<" is a palindrome number";
}
    else
    {
cout<<n<<" is not a palindrome number";
}
}