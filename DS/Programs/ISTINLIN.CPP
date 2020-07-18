/*
  insert in liked list
*/

#include<iostream.h>
#include<malloc.h>
#include<conio.h>
int main()
{
int n,i,j,a[10];
clrscr();
struct node
{
int data;
struct node *link;
}*node[100];

cout<<"Enter size of array: ";
cin>>n;
cout<<endl;

for(i=0; i<n; i++){
node[i]=(struct node*)malloc(sizeof(struct node));
node[i]->data = NULL;
}
for(i=0; i<n; i++){
cout<<"Enter value"<<(i+1)<<" ";
cin>>node[i]->data;
}

for(i=0; i<n; i++){
node[i]->link=node[i+1];
}
node[n-1]->link=NULL;

cout<<"You Entered : -\n";
for(i=0; i<n; i++){
cout<<node[i]->data<<endl;
}

getch();
}