import java.util.Scanner;

public class FindCharacterCase {
    
    public static void main(String[] args) {
        // Write your code here
        Scanner scanner = new Scanner(System.in);
        char inp = scanner.next().charAt(0);
        int a = inp;
        if(a>=65 && a<=90){
            System.out.println(1);
        }
        else if(a>=97 && a<=122){
            System.out.println(0);
        }
        else{
            System.out.println(-1);
        }
        scanner.close();
    }
}