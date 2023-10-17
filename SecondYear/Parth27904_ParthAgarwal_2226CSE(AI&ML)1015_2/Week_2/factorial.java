import java.util.ArrayList;
import java.util.List;
public class factorial {
    public static List<Long> factorialNumbers(long n) {
        // Write Your Code Here
        List<Long> l1 = new ArrayList<Long>();
        long fact = 1;
        long i =1;
        while(fact<=n){
            l1.add(fact);
            i++;
            fact = fact*i;
        }
        return l1;
    }
}