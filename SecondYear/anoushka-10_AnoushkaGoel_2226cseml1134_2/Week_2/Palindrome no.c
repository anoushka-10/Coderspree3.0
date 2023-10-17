#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int num=n;
    int numb=n;
    int count=0;
    //no of digits
while(n>0){
    n=n/10;
    count++;
}
int dig[count];
int i;
//array of digits
while(num>0){
    dig[i]=num%10;
    i++;
    num=num/10;
}
int c=count;
int sum=0;
for(int i=0;i<count;i++){
    sum+= dig[i]*pow(10,c-1);
    c--;
}
if(sum==numb){
    printf("true");
    }
    else{
        printf("false");
    }
    return 0;
}