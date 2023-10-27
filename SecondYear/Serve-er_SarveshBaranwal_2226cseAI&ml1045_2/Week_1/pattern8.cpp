#include<stdio.h>
//this is for removing error came in the code after copying the solution  on VS Code editor from GFG
//it is not wriiten in the GFG platform 



class Solution {
  public:
    void printTriangle(int n) {
       int i,j,k;
       for(i=1;i<=n;i++){
           for (j=1;j<=i;j++){
               printf("%d ",j);
           }
          for(k=n-i;k>0;k--){
               printf("    ");
           }
             for (j=i;j>=1;j--){
               printf("%d ",j);
           }
       
           printf("\n");
           }
    }
};