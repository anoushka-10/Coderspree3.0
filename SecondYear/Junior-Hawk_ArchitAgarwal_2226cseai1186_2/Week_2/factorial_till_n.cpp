long long fact(long long m){
    if(m==1){
        return 1;
    }
    return m*fact(m-1);
}
vector<long long> factorialNumbers(long long n) {
    vector<long long> ans;
    if(n>=1){
        ans.push_back(1);
    }
    long long i=2;
    while(true){
        long long k = fact(i);
        if(k<=n){
            ans.push_back(k);
        }
        else{
            break;
        }
        i++;
    }
    return ans;
}