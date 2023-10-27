import java.util.Scanner;

public class for_loop {


	public static void main(String[] args) {
		
		/* Your class should be named Solution.
	 	* Read input as specified in the question.
	 	* Print output as specified in the question.
		*/
		Scanner scanner  = new Scanner(System.in);
		int a = scanner.nextInt();
		int[] arr = new int[10000];
		arr[0] = 1;
		arr[1] = 1;
		for(int i = 2; i<a; i++){
			arr[i] = arr[i-1] + arr[i-2];
		}
		System.out.println(arr[a-1]);
        scanner.close();
	}

}
