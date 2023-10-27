#include<stdio.h>

int main(){
    int n, t, rev=0, d;
    printf("Enter a no. ");
    scanf("%d",&n);
    t=n;
    while(t!=0){
        d=t%10;
        rev=rev*10+d;
        t=t/10;
    }
    if(rev==n){
        printf("true");
    }
    else{
        printf("false");
    }
    return 0;
}