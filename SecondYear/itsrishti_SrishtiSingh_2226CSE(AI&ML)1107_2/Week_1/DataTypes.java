import java.util.Scanner;

public class DataTypes {
    
    public static int dataTypes(String s) {

        if(s.equals("Integer") ||s.equals("Float")){

            return 4;

        }

        if(s.equals("Long")||s.equals("Double")){

            return 8;

        }

        if(s.equals("Character")){

            return 1;

        }

        return -1;

    }
     public static void main(String[] args){

        Scanner s=new Scanner(System.in);

        String type=s.nextLine();

 

        int result=dataTypes(type);

        System.out.print(result);
        s.close();
     }
    
}