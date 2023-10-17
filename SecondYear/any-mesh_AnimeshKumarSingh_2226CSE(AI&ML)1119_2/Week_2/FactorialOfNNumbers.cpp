vector<long long> factorialNumbers(long long n) {
    // Write Your Code Here
    vector<long long> ans;
    long long fact = 1;
    long long i = 1;
    while(fact <= n){
        ans.push_back(fact);
        i++;
        fact *= i;
    }
    return ans;

}
