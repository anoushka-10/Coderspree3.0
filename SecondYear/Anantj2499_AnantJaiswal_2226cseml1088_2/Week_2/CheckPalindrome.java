public class CheckPalindrome {
        public static boolean palindromeNumber(int n){
            // Write your code here.
            int temp = n;
            int sum =0;
            while(temp>0){
                sum = sum*10+temp%10;
                temp/=10;
            }
            return sum == n;
        }
}
