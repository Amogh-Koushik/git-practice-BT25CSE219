// Exercise 03 - Array Statistics
// Reads n integers and prints the sum, average, minimum, maximum
// and the array in sorted order.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    if (!cin || n <= 0) {
        cout << "\nNumber of elements must be a positive integer." << endl;
        return 1;
    }

    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    long long sum = 0;
    int mn = arr[0], mx = arr[0];
    for (int x : arr) {
        sum += x;
        mn = min(mn, x);
        mx = max(mx, x);
    }
    double avg = (double)sum / n;

    sort(arr.begin(), arr.end());

    cout << "\nSum     : " << sum << endl;
    cout << "Average : " << avg << endl;
    cout << "Minimum : " << mn << endl;
    cout << "Maximum : " << mx << endl;
    cout << "Sorted  : ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    return 0;
}
