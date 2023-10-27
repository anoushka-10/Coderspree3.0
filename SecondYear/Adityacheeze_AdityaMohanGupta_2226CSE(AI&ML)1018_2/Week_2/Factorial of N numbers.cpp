vector<long long> factorialNumbers(long long n) {
    // Write Your Code Here
    vector<long long> res;
    for(int i=1; i <= n; i++){
        long long fact = 1;
        for(int j = 1; j <= i; j++){
            fact = fact * j;
        }
        if(fact <= n){
            res.push_back(fact);
        }
        if(fact > n){
            break;
        }
    }
    return res;
}