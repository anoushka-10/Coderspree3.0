#include<stdio.h>
//this is for removing error came in the code after copying the solution  on VS Code editor from GFG
//it is not wriiten in the GFG platform 


class Solution {
  public:
    void printSquare(int n) {
        // code here
        int i,j;
        for(j=0;j<n;j++){
            for(i=0;i<n;i++)
            {
            printf("* ");
                
            }
            printf("\n");
        }
    }
};