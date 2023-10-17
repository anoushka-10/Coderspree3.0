#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    scanf("%d", &n);
    bool isprime = true;

    if (n <= 1) {
        isprime = false;
    } else {
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                isprime = false;
                break; // Exit the loop as there is no need to check further
            }
        }
    }

    if (isprime) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}
