#include<iostream>
using namespace std;

int main() {
    int num = 50;  // Decimal number
    int pow = 1;   // Place value in binary
    int ans = 0;   // Binary equivalent

    // Continue until the number becomes 0
    while(num > 0) {
        int rem = num % 2;  // Find the remainder (0 or 1)
        num = num / 2;      // Divide the number by 2

        ans += rem * pow;   // Add the binary digit to the result
        pow = pow * 10;     // Move to the next place value
    }

    cout << ans;  // Output the binary equivalent
}

