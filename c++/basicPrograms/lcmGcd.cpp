#include <iostream>
using namespace std;

// Function to calculate GCD using Euclid's Algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;  // Find the remainder
        a = temp;   // Update a with the previous b
    }
    return a;  // The GCD
}

// Function to calculate LCM using the GCD
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);  // LCM formula
}

int main() {
    int num1, num2;

    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    int gcdResult = gcd(num1, num2);  // Compute GCD
    int lcmResult = lcm(num1, num2);  // Compute LCM

    cout << "GCD of " << num1 << " and " << num2 << " is: " << gcdResult << endl;
    cout << "LCM of " << num1 << " and " << num2 << " is: " << lcmResult << endl;

    return 0;
}
