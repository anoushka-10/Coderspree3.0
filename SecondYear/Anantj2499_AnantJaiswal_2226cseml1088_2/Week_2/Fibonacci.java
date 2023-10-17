public class Fibonacci {
        public static int[] generateFibonacciNumbers(int n) {
            // Write your code here.
            int[] arr = new int[n];
            arr[0]=0;
            if(n>1)
                arr[1]=1;
            for (int i =2; i<n; i++){
                arr[i]=arr[i-1]+arr[i-2];
            }
            return arr;
        }
}
