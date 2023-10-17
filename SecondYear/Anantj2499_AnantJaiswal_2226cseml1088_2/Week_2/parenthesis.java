import java.util.* ;
import java.io.*;
public class parenthesis {
    public static ArrayList<String> validParenthesis(int n){
        // Write your code here.
        ArrayList<String> ans = new ArrayList<>();
        generateParenthesis(n,0, 0, "", ans);
        return ans;
    }
    public static void generateParenthesis(int n, int open, int close, String s, ArrayList ans)
    {
        if (open == n && close == n) {
            ans.add(s);
            return;
        }
        if (open < n) {
            generateParenthesis(n, open + 1, close, s + "(", ans);
        }
        if (close < open) {
            generateParenthesis(n, open, close + 1, s + ")",ans);
        }
    }
}
