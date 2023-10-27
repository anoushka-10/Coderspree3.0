bool palindrome(int n)
{
    int k = n;
    int s=0;
    while(k>0){
        s = s*10 + (k%10);
        k /= 10;
    }
    if(s==n){
        return true;
    }
    else{
        return false;
    }
}