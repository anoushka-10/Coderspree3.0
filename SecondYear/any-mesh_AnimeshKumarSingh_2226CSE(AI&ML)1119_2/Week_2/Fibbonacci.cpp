vector<int> generateFibonacciNumbers(int n) {
    // Write your code here.
    vector<int> ans;
    int a = 0;
    ans.push_back(a);
    if(n == 1)
        return ans;
    int b = 1;
    ans.push_back(b);
    if(n == 2)
        return ans;
    for(int i = 3 ; i <= n ; i++){
        int c = a + b;
        ans.push_back(c);
        a = b;
        b = c;
    }
    return ans;
}
