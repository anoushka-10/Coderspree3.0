void f(vector<long long> &ans,long long i,long long fact,long long n){
    if(fact>n) return;
    ans.push_back(fact);
    f(ans,i+1,fact*i,n);
}

vector<long long> factorialNumbers(long long n) {
    // Write Your Code Here
    long long fact=1;
    long long i=2;
    vector<long long> ans;
    f(ans,i,fact,n);
    return ans;

}