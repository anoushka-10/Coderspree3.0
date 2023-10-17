public class Print_Number_1_to_N_using_Recursion {
    public static void main(String[] args) {
        int n = 10;
        int[] array = new int[n];

       
        for (int i = 0; i < n; i++) {
            array[i] = i + 1;
        }

        printArrayRecursively(array, n, 0);
    }

    // Recursive function to print an array
    public static void printArrayRecursively(int[] array, int n, int index) {
        if (index == n) {
            return; // Base case: Stop when the index is equal to n
        }

        System.out.println(array[index]);
        printArrayRecursively(array, n, index + 1); // Recursively print the next element
    }
}
