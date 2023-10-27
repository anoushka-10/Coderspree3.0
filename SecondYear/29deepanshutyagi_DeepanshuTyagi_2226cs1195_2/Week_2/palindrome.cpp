bool palindrome(int n) {
    if (n < 0) {
        return false; 
    }

    int original = n;
    int reversed = 0;

    while (n > 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }

    return original == reversed;
}
