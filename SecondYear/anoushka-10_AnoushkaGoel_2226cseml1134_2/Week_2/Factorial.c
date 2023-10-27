#include<stdio.h>
int fact(int n){
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
}
int main(){
int n;
scanf("%d",&n);
int a[n];

for(int i=1;i<=n;i++){
  a[i]=fact(i);
  if(a[i]<=n){
    printf("%d ",a[i]);
  }
  else{
    break;
  }
}
return 0;
}