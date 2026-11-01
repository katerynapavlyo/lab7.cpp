#include <iostream>

using namespace std;

// Recursive function to calculate x_n
long long getX(int n) {
    // Base cases: x_0 = 1, x_1 = 1
    if (n == 0 || n == 1) {
        return 1;
    }
    // Recursive step: x_i = x_{i-1} + x_{i-2}
    return getX(n - 1) + getX(n - 2);
}

int main() {
    int n;
    cout << "Enter n (n >= 0): ";
    cin >> n;

    if (n < 0) {
        cout << "Error: n must be a non-negative integer!" << endl;
        return 1;
    }

    cout << "x_" << n << " = " << getX(n) << endl;

    return 0;
}