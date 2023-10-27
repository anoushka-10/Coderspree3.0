long reverseBits(long n) {
    vector<int> bits(32,0);
    int i =0,c=0;
    while(n>0){
        int rem = n%2;
        if(rem==1) c++;
        bits[i] = rem;
        i++;
        n/=2;
    }
    long k=0;
    for(int i=0;i<32;i++){
        if(bits[i]==1){
            k += pow(2,32-i-1);
            c--;
        }
        if(c==0) break;
    }
    return k;
}