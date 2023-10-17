import java.util.Scanner;

public class armstrong {
	
	public static void main(String[] args) {
		// Write your code here
		Scanner scanner = new Scanner(System.in);
		int n = scanner.nextInt();
		int count = 0;
		int temp = n;
		int temp2 = n;
		int digit = 0;
		while(temp!=0){
			digit = temp%10;
			count++;
			temp = temp/10;
		}
		int sum = 0;
		while(temp2!=0){
			digit = temp2%10;
			sum += (int)Math.pow(digit, count);
			temp2 = temp2/10;
		}
		if(sum==n){
			System.out.println("true");
		}
		else{
			System.out.println("false");
		}
        scanner.close();
	}
}

