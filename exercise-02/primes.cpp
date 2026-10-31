// Exercise 02 - Prime Numbers in a Range
// Prints all prime numbers between L and R (both included).

#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int L, R;
    cout << "Enter the range (L R): ";
    cin >> L >> R;

    if (!cin || L > R) {
        cout << "\nInvalid range." << endl;
        return 1;
    }

    int count = 0;
    cout << "\nPrime numbers between " << L << " and " << R << ":" << endl;
    for (int i = L; i <= R; i++) {
        if (isPrime(i)) {
            cout << i << " ";
            count++;
        }
    }
    cout << "\nTotal primes found: " << count << endl;

    return 0;
}
