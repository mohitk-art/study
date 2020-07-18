#include<iostream>
int main()
{
int c,n,a[100],x;
				
				std::cout<<"Enter maximum size of list ";
				std::cin>>n;
				
				std::cout<<"Enter "<<n<<" numbers\n";
for(c=1;c<=n;c++)
				{
				std::cout<<"_________\n|("<<c<<") |";
								 std::cin>>a[c];
								std::cout<<"|";
								}
				
				std::cout<<"\nEnter a number to search ";
								std::cin>>x;
				
		for(c=1;c<=n;c++)
				{
								if(a[c]==x)
								{
				std::cout<<"The number "<<x<<" is found at location ("<<c<<")";
	break;
	}
								}
				
				if(c==n)
				{
								std::cout<<x<<" is not found";
}
				
				}