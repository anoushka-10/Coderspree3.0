double myPow(double x, int n) {
    if (n == 0) {
        return 1.0;
    }

    if (n < 0) {
        x = 1.0 / x;
        if (n == INT_MIN) {
            x *= x;
            n = INT_MAX;
        } else {
            n = -n;
        }
    }

    if (n % 2 == 0) {
        double halfPow = myPow(x, n / 2);
        return halfPow * halfPow;
    } else {
        double halfPow = myPow(x, n / 2);
        return halfPow * halfPow * x;
    }
}
