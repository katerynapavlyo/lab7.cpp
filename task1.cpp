#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

double f(double x) {
    if (x > 3) {
        double sum = 0;
        for (int p = 1; p <= 17; p += 2) {
            sum += pow(sin(x), p);
        }
        return sum;
    } else {
        double sum = 15;
        double current_tg = tan(x);
        
        sum += current_tg;
        
        for (int i = 2; i <= 5; i++) {
            current_tg = tan(current_tg); // tg(tg(...))
            sum += current_tg;
        }
        
        return sum;
    }
}
int main() {
    double a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    double u = max(f(a), f(b));
    cout << "f(a) = " << f(a) << endl;
    cout << "f(b) = " << f(b) << endl;
    cout << "u = max(f(a), f(b)) = " << u << endl;
    return 0;
}