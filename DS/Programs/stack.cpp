#include<stdio.h>
#define MAX 100
int top=-1,flag;
void push(int stack[],int item)
{
    if(top==(MAX-1))
    {
        flag=0;
        }
        else
        {
        flag=1;
            ++top;
            stack[top]=item;
            }}
    void pop(int stack[])
    {
        int ref;
        if(top==-1)
        {
            ref=0;
          flag=0;
            }
        else
        {
            flag=1;
            ref=stack[top];
            --top;
            }
     return ref;
        }
              
int main()
{
    int item,a[100];
        printf("Enter the item you want to push");
        scanf("%d",&item);
     // push(a[],item);
        }
    