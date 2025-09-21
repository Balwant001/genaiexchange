#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;  // square matrix size

    int arr[100][100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int mid = n / 2;  // middle index

    // Print matrix with only middle row & column
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == mid || j == mid) {
                cout << arr[i][j] << " ";
            } else {
                cout << "  ";  // spaces for blank
            }
        }
        cout << endl;
    }

    return 0;
}
