#include <iostream>
using namespace std;

// Extended Euclidean Algorithm: finds x, y such that ax + by = gcd(a, b)
int extendedGCD(int a, int b, int &x, int &y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a; // gcd
    }  
    int x1, y1;
    int gcd = extendedGCD(b, a % b, x1, y1);

    x = y1;
    y = x1 - (a / b) * y1;

    return gcd;
}

int main() {
    int a, b;
    cin >> a >> b;

    int x, y;
    int c = extendedGCD(a, b, x, y); // c is gcd(a, b)

    cout << "x = " << x << ", y = " << y << ", gcd = " << c << endl;
    // This guarantees that: a * x + b * y = c
}
