public class fibonacci {
    public static int[] generateFibonacciNumbers(int n) {
        // Write your code here.
        int[] array = new int[n];
        array[0] = 0;
        if(n==1){
            return array;
        }
        array[1]= 1;
        for(int i = 2; i<n; i++){
            array[i] = array[i-1] + array[i-2];
        }
        return array;
    }
}