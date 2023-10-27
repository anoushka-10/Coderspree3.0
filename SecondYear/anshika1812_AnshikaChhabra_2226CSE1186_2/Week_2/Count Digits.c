// Counting the no. of digits in a given no. that completely divide the given no.

#include<stdio.h>

int main(){
    int n,d,t,count=0;
    printf("Enter a no. ");
    scanf("%d",&n);
    t=n;
    while(t!=0){
        d=t%10;
        if(n%d==0){
            count++;
        }
        t=t/10;
    }
    printf("%d",count);
    return 0;
}