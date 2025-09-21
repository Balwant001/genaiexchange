#include <iostream>
using namespace std;

int main() {
    int n;
    
    // Taking input
    cout << "Enter an integer (n): ";
    cin >> n;

    // Creating an array of size n
    int squares[n];

    // Filling the array with squares of natural numbers
    for (int i = 1; i <= n; i++) {
        squares[i - 1] = i * i;
    }

    // Printing the array elements
    cout << "Squares of natural numbers up to " << n << ": ";
    for (int i = 0; i < n; i++) {
        cout << squares[i] << " ";
    }

    return 0;
}
