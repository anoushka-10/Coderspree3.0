#include<stdio.h>
#include<vector>


void print(vector<int> &v,int x,int &count){
      if (count == x) {
    v.push_back(count);
    return;
  }
  v.push_back(count);
  count++;
  print(v, x, count);



}
   

vector<int> printNos(int x) {
    // Write Your Code Here
    int count=1;
    vector<int> v;
    print(v,x,count);
   return v;
}