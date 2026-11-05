#include <iostream>

using namespace std;

long long getX(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
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