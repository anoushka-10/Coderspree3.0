#include<stdio.h>
#include<math.h>

int print(int n){
    if(n==1)
    {
        printf("%d",1);
        return 0;
    }
    printf("%d\t",n);
    print(n-1);
}

int main(){
    int n;
    printf("Enter a no.: ");
    scanf("%d",&n);
    print(n);
    return 0;
}