
    import java.util.*;
    public class CheckArmstrong {

        public static void main(String[] args) {
            // Write your code here
            Scanner sc = new Scanner(System.in);
            int n = sc.nextInt();
            int temp = n;
            int count = 0;
            while (temp > 0) {
                temp /= 10;
                count++;
            }
            temp = n;
            int sum = 0;
            int digit;
            while (temp > 0) {
                digit = temp % 10;
                sum += (int) Math.pow(digit, count);
                temp /= 10;
            }
            if (sum == n)
                System.out.println("true");
            else
                System.out.println("false");
        }
    }
