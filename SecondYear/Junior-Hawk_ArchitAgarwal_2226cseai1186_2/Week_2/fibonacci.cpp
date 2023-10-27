vector<int> generateFibonacciNumbers(int n) {
    if(n==1){
        return {0};
    }
    else if(n==2){
        return {0,1};
    }
    vector<int> ans(n,0);
    ans[1]=1;
    for(int i=2;i<n;i++){
        ans[i] = ans[i-1]+ans[i-2];
    }
    return ans;
}