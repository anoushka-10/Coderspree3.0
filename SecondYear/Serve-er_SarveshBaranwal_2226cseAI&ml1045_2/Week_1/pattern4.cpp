#include<stdio.h>
//this is for removing error came in the code after copying the solution  on VS Code editor from GFG
//it is not wriiten in the GFG platform 

class Solution {
  public:
    void printTriangle(int n) {
        // code here
        int i,j;
        for(i=1;i<=n;i++){
            for(j=1;j<=i;j++){
                printf("%d ",i);
            }
            printf("\n");
        }
    }
};