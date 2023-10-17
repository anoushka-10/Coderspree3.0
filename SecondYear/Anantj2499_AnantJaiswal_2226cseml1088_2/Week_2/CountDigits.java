public class CountDigits {
        public static int countDigits(int n) {
            // Write your code here.
            int temp = n;
            int count = 0;
            int digit;
            while (temp > 0) {
                digit = temp % 10;
                if (digit != 0) {
                    if (n % digit == 0) {
                        count++;
                    }
                }
                temp = temp / 10;
            }
            return count;
        }
}
