#include<bits/stdc++.h>
using namespace std;

int main()
{
        int n;
        cin >> n;
        int a = 1;
        int b = 1;
        int c;
        if(n == 1 or n == 2)
                c = 1;
        for(int i = 3 ; i <= n ; i++){
                c = a + b;
                a = b;
                b = c;
        }
        cout << c;
}