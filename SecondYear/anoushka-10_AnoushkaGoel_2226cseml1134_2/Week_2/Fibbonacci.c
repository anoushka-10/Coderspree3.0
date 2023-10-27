#include<stio.h>
int fibb(int n){
    while(n>0){
        n1=0;
        n2=1;
        n3=n1+n2;
       
        printf("%d",n3);
    }
}
int main(){
    int a;
    cin>>a;
    fibonacciseries(a);
    return 0;
}