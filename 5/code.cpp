#include <iostream>

using namespace std;

double myPow(double x, int n) {
    if (n == 0) return 1.0;
    if (n < 0) {
        x = 1 / x;
        n = -n;
    }
    double half = myPow(x, n / 2);
    if (n % 2 == 0) {
        return half * half;
    } else {
        return half * half * x;
    }
}

int main() {
    double x;
    int n;
    cout << "Введіть значення x: "; cin >> x;
    cout << "Введіть значення n: "; cin >> n;

    double result = myPow(x, n);
    cout << x << " у степені " << n << " = " << result << endl;
    return 0;
}