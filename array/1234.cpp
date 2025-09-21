#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string s;
    std::cin >> s;

    long long count = 1;
    const int MOD = 10007;
    int n = s.length();

    // Loop through the first half of the string
    for (int i = 0; i < n / 2; ++i) {
        char left = s[i];
        char right = s[n - 1 - i];

        if (left == '?' && right == '?') {
            count = (count * 26) % MOD;
        } else if (left != '?' && right != '?') {
            if (left != right) {
                // Not a palindrome, no completions possible
                count = 0;
                break;
            }
        }
    }

    // Handle the middle character for odd-length strings
    if (n % 2 != 0) {
        if (s[n / 2] == '?') {
            count = (count * 26) % MOD;
        }
    }

    std::cout << count << std::endl;

    return 0;
}