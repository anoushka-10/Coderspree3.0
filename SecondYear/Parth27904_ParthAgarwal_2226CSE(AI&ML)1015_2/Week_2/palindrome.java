public class palindrome {
    public static boolean palindromeNumber(int n){
        // Write your code here.
        int rev = 0;
        int temp = n;
        int digit =0;
        if(n<10){
            return true;
        }
        else{
        while(temp!=0){
            digit = temp%10;
            rev = 10*rev+digit;
            temp = temp/10;
        }
        return n==rev;
        }
    }
}
