#include<stdio.h>

int main()
{
    int a=0,b=1,c,i,n;
    printf("Enter no. of terms to be printed: ");
    scanf("%d",&n);
    if(n==1){
        printf("%d",a);
    }
    else if(n==2){
        printf("%d\t%d",a,b);
    }
    else{
        printf("%d\t%d\t",a,b);
        for(i=2;i<n;i++){
            c=a+b;
            a=b;
            b=c;
            printf("%d\t",c);
        }
    }
    return 0;
}