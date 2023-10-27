#include<stdio.h>

//this is for removing error came in the code after copying the solution  on VS Code editor from GFG
//it is not wriiten in the GFG platform 



class Solution {
  public:
    void printDiamond(int n) {
        // code here
         int i,j,k;
        for(i=1;i<=n;i++){
            for(j=1;j<=n-i;j++){
            
                   printf(" ");
                   
               
            }
            for (k=1;k<=i;k++){
                printf("* ");
            }
          
            
         printf("\n");
        }
      for(i=1;i<=n;i++){
            for(j=n-1;j>n-i;j--){
            
                   printf(" ");
                   
               
            }
            for (k=n;k>=i;k--){
                printf("* ");
            }
            
         printf("\n");
        }
    }
};