#include<stdio.h>
#include<math.h>

int main(){
    int n, t, count=0, rev=0, d;
    printf("Enter a no.: ");
    scanf("%d",&n);
    t=n;
    while(t!=0){
        t=t/10;
        count++;
    }
    t=n;
    while(t!=0){
        d=t%10;
        rev=rev+pow(d,count);
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