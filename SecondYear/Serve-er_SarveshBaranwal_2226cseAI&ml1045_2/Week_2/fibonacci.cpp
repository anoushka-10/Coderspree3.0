
#include<vector>


vector<int> generateFibonacciNumbers(int n) {

    vector<int> fib;

    if (n < 1) {

        return fib;  

    }

    fib.push_back(0);

    if (n == 1) {

        return fib; 

    }

    fib.push_back(1);

    if (n == 2) {

        return fib; 

    }

    for (int i = 2; i < n; i++) {

        int next = fib[i - 1] + fib[i - 2];

        fib.push_back(next);

    }

    return fib; 

}