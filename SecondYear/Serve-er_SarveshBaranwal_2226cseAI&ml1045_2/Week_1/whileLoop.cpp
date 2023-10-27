#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n,k,even=0,odd=0;
	scanf("%d",&n);
	while(n){
		k=n%10;
		n=n/10;
		if(k%2==0){
			even+=k;
		}
		else{
			odd+=k;
		}
        
	}
    printf("%d ",even);
	printf("%d",odd);
	return 0;
}
