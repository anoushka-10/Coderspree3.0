bool palindrome(int n)
{
    // Write your code here
    int temp = n;
    int rev = 0;
    while (n) {
      rev = rev * 10 + (n % 10);
      n /= 10;
    }
    return (rev == temp);
}
    
