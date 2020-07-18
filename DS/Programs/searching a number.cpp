#include<iostream.h>
#include <conio.h>
int main()
{
int c,n,a[100],x;
clracr();
cout<<"Enter maximum size of list ";
cin>>n;
				
cout<<"Enter "<<n<<" numbers\n";
for(c=1;c<=n;c++)
{
cout<<"_________\n|("<<c<<") |";
cin>>a[c];
cout<<"|";
}
	
cout<<"\nEnter a number to search ";
cin>>x;
				
for(c=1;c<=n;c++)
				{
if(a[c]==x)
								{
cout<<"The number "<<x<<" is found at location ("<<c<<")";
break;
}
								}
				
if(c==n)
{
cout<<x<<" is not found";
}
getch();
}