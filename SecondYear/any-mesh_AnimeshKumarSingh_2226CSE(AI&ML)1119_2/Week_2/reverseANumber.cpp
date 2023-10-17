long reverseBits(long n) {
    // Write your code here.
    vector<int> bits(32, 0);
    
    for(int i = 0 ; i < 32 ; i++){
        if((n & (long)1 << i) > 0){
            bits[i] = 1;
        }
    }
    for(int i = 0 ; i < 16 ; i++){
        swap(bits[i], bits[31 - i]);
    }

    long ans = 0;

    for(int i = 0 ; i < 32 ; i++){
        if(bits[i] == 1){
            ans += (long)1 << i;
        }
    }
    return ans;
}
