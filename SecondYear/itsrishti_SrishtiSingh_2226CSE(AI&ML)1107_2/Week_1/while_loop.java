import java.util.Scanner;

public class while_loop {	
	public static void main(String[] args) {
		// Write your code here
		Scanner scanner = new Scanner(System.in);
		int n = scanner.nextInt();
		int even = 0;
		int odd = 0;
		int temp = n;
		while(temp>0){
			int digit = temp%10;
			if(digit%2==0){
				even += digit;
			}
			else{
				odd += digit;
			}
			temp = temp/10;
		}
		System.out.print(even + " " + odd);

        scanner.close();

	}

}
