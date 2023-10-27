#include<stdio.h>

int main()
{
    double x,pow=1;
    int n,i;
    printf("Enter base: ");
    scanf("%lf",&x);
    printf("Enter exponent: ");
    scanf("%d",&n);
    if(n<0){
        printf("Invalid");
    }
    else{
        for(i=0;i<n;i++){
            pow=pow*x;
        }
        printf("%lf",pow);
    }
    return 0;
}