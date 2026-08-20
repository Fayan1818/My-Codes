#include <iostream>
using namespace std;

int extendedGCD(int a, int b, int &x, int &y) {

    // Step 1: Stop when b becomes 0
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }

    // Step 2: Variables for previous coefficients
    int x1, y1;

    // Step 3: Continue Euclidean Algorithm
    int gcd = extendedGCD(b, a % b, x1, y1);

    // Step 4: Calculate x and y
    x = y1;
    y = x1 - (a / b) * y1;

    return gcd;
}

int main() {

    // Step 5: Input
    int a, b;
    cin >> a >> b;  //30,20

    // Step 6: Variables to store answer
    int x, y;

    // Step 7: Call function
    int gcd = extendedGCD(a, b, x, y);

    // Step 8: Print answer
    cout << "GCD = " << gcd << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}



/*

*/