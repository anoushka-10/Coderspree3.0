
#include <iostream>
#include <vector>
using namespace std;

vector<int> printNos(int x) {
    // Write Your Code Here
    vector<int> numbers;

  
  for (int i = 1; i <= x; i++) {
    numbers.push_back(i);
  }

 
  return numbers;
}