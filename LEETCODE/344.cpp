#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<char> s = {'h','e','l','l','o'}; // Change this as needed
    int st = 0;
    int e = s.size() - 1;

    while (e > st) {
        swap(s[st++], s[e--]);
    }

    for (char c : s) cout << c;
    cout << endl;

    return 0;
}
