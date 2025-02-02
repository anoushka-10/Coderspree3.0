#include <iostream>
using namespace std;
#include<vector>
class Solution {
public:
    int minimumOperations(vector<int>& v) {
  
   int n=v.size();
   vector<int>dp(n,1);
   int m=1;
   for(int i=1;i<n;i++){
     for(int j=i-1;j>=0;j--){
       if(v[i]>=v[j]){
         dp[i]=max(dp[i],1+dp[j]);
         m=max(m,dp[i]);
       }
     }
   }
   return n-m;
    }
};