#include<stdio.h>
#include<math.h>

int main(){
    int n, i, count=0;
    printf("Enter a no.: ");
    scanf("%d",&n);
    if(n==1){
        printf("NO");
        return 0;
    }
    for(i=2;i<n;i++){
        if(n%i==0){
            count++;
            printf("NO");
            break;
        }
    }
    if(count==0){
        printf("YES");
    }
    return 0;
}