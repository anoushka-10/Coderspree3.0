vector<int> generateFibonacciNumbers(int n) {
    // Write your code here.
    vector<int>res(n);
    res[1]=1;
    for(int i=2; i<n ;i++){
        res[i] = res[i-1] + res[i-2];
    }
    return res;
}
