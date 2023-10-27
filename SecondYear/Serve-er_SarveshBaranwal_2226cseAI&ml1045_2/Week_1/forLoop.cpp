#include<stdio.h>
using namespace std;

int main()
{
        /*
        *  Write your code here. 
         *  Read input as specified in the question.
         *  Print output as specified in the question.
        */
        int a=0,b=1,d,c,i;
        scanf("%d",&c);
        if (c==1){
                d=1;
        }
        for(i=1;i<c;i++){
                d=b+a;
                a=b;
               b=d;

        } 
        printf("%d",d);
}