#include <iostream>

using namespace std;

int climbStairs(int n) {
    if (n == 0) return 1;
    if (n == 1) return 1;
    return climbStairs(n - 1) + climbStairs(n - 2);
}

int main() {
    int n;
    cout << "Введіть число сходинок n: ";
    cin >> n;
    
    int result = climbStairs(n);
    cout << "Кількість способів піднятися на вершину: " << result << endl;
    return 0;
}