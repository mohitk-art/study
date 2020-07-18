//bubble sort
#include<stdio.h>
#include<conio.h>
int main(){
    int a[40],b,n,c,tmp;
    
    
    //Number of values in an array
    printf("Enter size of array ");
    scanf("%d",&n);
    
    
    //values Input Method
    printf("Enter the values->\n");
    for(b=1;b<=n;b++){
        printf("%d. ",b);
        scanf("%d",&a[b]);
    }
    

    //Shorting Method
    for(b=n;b>=1;b--){
        for(c=1;c<=b;c++){
            if(a[c]>a[b]){
                tmp=a[b];
                a[b]=a[c];
                a[c]=tmp;
            }
        }
    }
    

    //Display values in Ascending order
    printf("Values in sorted list");
    for(b=1;b<=n;b++){
        printf("\n%d. %d",b,a[b]);
    }
}