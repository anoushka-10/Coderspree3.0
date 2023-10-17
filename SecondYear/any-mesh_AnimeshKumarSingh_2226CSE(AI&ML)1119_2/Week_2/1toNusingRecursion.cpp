void func(int x, vector<int> &ans){
    if(x == 0)
        return;
    
    func(x - 1, ans);

    ans.push_back(x);
}
vector<int> printNos(int x) {
    // Write Your Code Here
    vector<int> ans;
    func(x, ans);

    return ans;
}
