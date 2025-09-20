#include <iostream>
using namespace std;

int main() {
    string s;
    getline(cin, s);  // Read input string

    int start = 0, end = s.length() - 1;
    bool palindrome = true;

    while (start < end) {
        // Skip non-alphanumeric characters
        if (!((s[start] >= 'a' && s[start] <= 'z') || 
              (s[start] >= 'A' && s[start] <= 'Z') || 
              (s[start] >= '0' && s[start] <= '9'))) {
            start++;
            continue;
        }
        if (!((s[end] >= 'a' && s[end] <= 'z') || 
              (s[end] >= 'A' && s[end] <= 'Z') || 
              (s[end] >= '0' && s[end] <= '9'))) {
            end--;
            continue;
        }

        // Convert to lowercase if uppercase
        char left = (s[start] >= 'A' && s[start] <= 'Z') ? s[start] + 32 : s[start];
        char right = (s[end] >= 'A' && s[end] <= 'Z') ? s[end] + 32 : s[end];

        if (left != right) {
            palindrome = false;
            break;
        }

        start++;
        end--;
    }

    if (palindrome)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
