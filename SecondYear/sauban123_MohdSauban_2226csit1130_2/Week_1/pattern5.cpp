#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
	
	void printTriangle(int n) {

	    for(int i = n ; i > 0 ; i--){
	        for(int j = 1 ; j <= i ; j++){

	            cout << "* ";
	        }
	        cout << endl;
	    }
	}
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution s;
        s.printTriangle(n);
    }
    return 0;
}