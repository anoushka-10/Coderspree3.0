#include<stdio.h>

int main(){
    int n, i=1, fac=1;
    printf("Enter limit: ");
    scanf("%d",&n);
    while(fac<=n){
        printf("%d\t",fac);
        i++;
        fac=fac*i;
    }
    return 0;
}