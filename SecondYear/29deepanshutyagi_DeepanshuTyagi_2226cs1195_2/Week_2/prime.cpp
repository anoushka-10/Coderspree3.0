#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int n)
{
	// Write your code here.
	if (n <= 1) {
        return 0;  
    }

    if (n == 2) {
        return 1; 
    }

    if (n % 2 == 0) {
        return 0;  
    }

    int sqrt_n = sqrt(n);
    for (int i = 3; i <= sqrt_n; i += 2) {
        if (n % i == 0) {
            return 0;  
        }
    }

    return 1;
}
