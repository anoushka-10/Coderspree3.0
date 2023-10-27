double myPow(double x, int n) {
    // Write Your Code Here
    double res = 1.0;
    if(n < 0){
        n = n * (-1);
        x = 1 / x;
    }
    for(int i = 0; i < n; i++){
        res *= x; 
    }
    return res;
}