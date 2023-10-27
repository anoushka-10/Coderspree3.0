#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n; cin>>n;
	int sum_even = 0;
	int sum_odd = 0 ;
	while(n != 0){
		int temp=n%10;
		if(temp%2==0){
			sum_even+=temp;
		}
		else{
			sum_odd+=temp;
		}
		n=n/10;
	}
	cout<< sum_even <<" "<< sum_odd;
}