
import java.util.List;
import java.util.*;
    public class Factorial {
        public static List<Long> factorialNumbers(long n) {
            // Write Your Code Here
            List<Long> factorial= new ArrayList<>();
            long f;
            for(int i =0; i<n;i++){
                f = fact(i+1);
                if(f>n)
                    break;
                factorial.add(f);
            }
            return factorial;
        }
        public static long fact(int n){
            if(n<=1)
                return 1;
            else
                return n*fact(n-1);
        }
    }

