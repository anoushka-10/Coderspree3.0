#include<stdio.h>
#include<math.h>

int bin_rev_dec(int n){
    int bin[32], i, c, exp;
    long int rev=0;
    i=0;
    c=0;
    while(n!=0){
        i=n%2;
        bin[c]=i;
        n=n/2;
        c++;
    }
    exp=31;
    for(i=0;i<c;i++){
        rev=rev+bin[i]*pow(2,exp);
        exp--;
    }
    printf("%ld\n",rev);
    return 0;
}
int main(){
    int t, n;
    printf("Enter no. of test cases: ");
    scanf("%d",&t);
    while(t!=0){
        printf("Enter no.: ");
        scanf("%d",&n);
        bin_rev_dec(n);
        t--;
    }
    return 0;
}