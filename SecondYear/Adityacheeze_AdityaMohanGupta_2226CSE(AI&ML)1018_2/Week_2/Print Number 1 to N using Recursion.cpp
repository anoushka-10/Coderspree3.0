vector<int> printNos(int x) {
    // Write Your Code Here
    vector<int>res;
    if(x < 1){
        return vector<int>();
    }
    res=printNos(x-1);
    res.push_back(x);
    return res;
}
