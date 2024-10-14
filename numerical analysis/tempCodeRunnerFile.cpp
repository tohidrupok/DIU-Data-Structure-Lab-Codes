#include <bits/stdc++.h>
using namespace std;

double f(double x) {
    return (x * x * x) - x - 1;
}

int main() {
    double c, a, b;
    cin >> a >> b;
    if (a < b && f(a) * f(b) < 0) {
        while (1) {
            c = (a + b) / 2;
            if (f(c) == 0) {
                cout << "The root is: " << c << endl;
                break;
            }
            if (f(a) * f(c) < 0) {
                b = c;
            } else if (f(c) * f(b) < 0) {
                a = c;
            }
            if (abs(f(c)) < 0.00005) {
                break;
            }
        }
        cout << "The root is: " << c << endl;
    } else {
        cout << "Error in your input" << endl;
    }
    return 0;
} 