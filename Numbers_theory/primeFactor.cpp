#include <iostream>
#include <cmath>
using namespace std;

void primeFactors(int n) {
    // Handle factor 2
    while (n % 2 == 0) {
        cout << 2 << " ";
        n = n / 2;
    }

    // Check odd factors from 3 onwards
    for (int i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            cout << i << " ";
            n = n / i;
        }
    }

    // If n is still greater than 2, then it's a prime
    if (n > 2)
        cout << n << " ";
}

int main() {
    int num = 315;
    cout << "Prime factors of " << num << " are: ";
    primeFactors(num);
    return 0;
}   

// Output: Prime factors of 315 are: 3 3 5 7