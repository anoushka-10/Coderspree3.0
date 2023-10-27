#include<vector>

void solve(string temp,vector<string> &ans,int open,int close,int n){
        if(open==n && close==n){
            ans.push_back(temp);
            return;
        }
        if(open!=n)solve(temp+'(',ans,open+1,close,n);
        if(open>close)solve(temp+')',ans,open,close+1,n);
        
    }
    vector<string> validParenthesis(int n) 
    {
        string temp = "";
        vector<string> ans;
        solve(temp,ans,0,0,n);
        return ans;
    }