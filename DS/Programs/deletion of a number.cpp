#include<iostream.h>
#include<conio.h>
int main()
{
int arr[100],p,n,c;
clrscr();				
cout<<"Enter number of elements in array\n";
cin>>n;
				
cout<<"Enter "<<n<<" element\n";
for(c=1;c<=n;c++)
{
cout<<"__________\n|("<<c<<")| ";
cin>>arr[c];
cout<<"|";
}
cout<<"\nEnter the location where you wish to delete element\n";
cin>>p;
				
if(p>n)
				{
cout<<"Deletion not possible\n";
}
else
{
for(c=p;c<=n;c++)
{
arr[c]=arr[c+1];
cout<<"Resultent:-\n";
for(c=1;c<n;c++)
{
cout<<"____________\n|("<<c<<")| "<<arr[c]<<"|\n";
}
}
getch();
}