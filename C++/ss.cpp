//selection sort
#include<stdio.h>
#include<conio.h>
int main()
{
  int a[40],b,n,c,tmp;
    printf("Enter size of array ");
    scanf("%d",&n);
    printf("Enter the values->\n");
    for(b=1;b<=n;b++)
    {
        printf("%d. ",b);
        scanf("%d",&a[b]);
    }
    
    for(b=1;b<=n;b++)
    {
        for(c=b+1;c<=n;c++)
        {
            if(a[b]>a[c])
            {
                tmp=a[b];
                a[b]=a[c];
                a[c]=tmp;
            }}}
    
    printf("Values in sorted list\n");
    for(b=1;b<=n;b++)
    {
        printf("\n%d. %d",b,a[b]);
    }
}