bool palindrome(int n)
{
    // Write your code here
    int i=0,c,temp=n;
    while(n){
        c=n%10;
       i=i*10+c;
        n=n/10;
       
    }
    if(i==temp){
        return true;
    }
    else{
        return false;
    }
}