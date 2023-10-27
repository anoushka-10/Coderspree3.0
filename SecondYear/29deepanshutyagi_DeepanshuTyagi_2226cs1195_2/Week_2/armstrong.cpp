#include <iostream>
#include <cmath>
using namespace std;
bool checkArmstrong(int n){
	//Write your code here
	int originalNumber = n;
    int numDigits = log10(n) + 1;  
    int sum = 0;

    while (n > 0) {
        int digit = n % 10;
        sum += pow(digit, numDigits);
        n /= 10;
    }

    return sum == originalNumber;
}
