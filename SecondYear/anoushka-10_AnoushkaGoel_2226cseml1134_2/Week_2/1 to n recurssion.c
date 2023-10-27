#include<stdio.h>
int natural(int n){
    if(n==0){
        return 0;
    }
    natural(n-1);
    printf("%d ",n);
}
int main(){
    int a;
    scanf("%d",&a);
    natural(a);
    return 0;
}