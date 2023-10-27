#include<stdio.h>

//this is for removing error came in the code after copying the solution  on VS Code editor from GFG
//it is not wriiten in the GFG platform 

class Solution {
  public:
    void printTriangle(int n) {
        // code here
        int i,j,k;
        for(i=1;i<=n;i++){
            for(j=1;j<=n-i;j++){
            
                   printf(" ");
                   
               
            }
            for (k=1;k<=2*i-1;k++){
                printf("*");
            }
            
         printf("\n");
        }
    }
};