#include <iostream>

using namespace std;

int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << "Введіть число n: ";
    cin >> n;
    int result = fibonacci(n);
    cout << "F(" << n << ") = " << result << endl;
    return 0;
}