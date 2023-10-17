vector<string>ans;
void solve(int n, string &str, int open, int close){
        if(open == close and open == n - 1){
            ans.push_back(str);
            return;
        }
        if(open < n){
            str.push_back('(');
            solve(n, str, open + 1, close);
            str.pop_back();

        }
        if(open > close){
            str.push_back(')');
            solve(n, str, open, close + 1);
            str.pop_back();
        }
    }
vector<string> validParenthesis(int n){
    // Write your code here.
    ans.clear();
        ans.resize(0);
        string str;
        solve(n+1, str, 0, 0);
        return ans;
}
