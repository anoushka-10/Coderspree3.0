#include<iostream>
using namespace std;

int main() {
	char ch;
	cin >> ch;

	if(ch >= 65 and ch <= 90)
		cout << 1;

	else if(ch >= 97 and ch <= 122)
		cout << 0;

	else
		cout << -1;
	return 0;
	
}