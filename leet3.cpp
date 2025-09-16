#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mp; // stores char -> last index
        int left = 0, maxLen = 0;

        for (int right = 0; right < s.length(); right++) {
            if (mp.find(s[right]) != mp.end() && mp[s[right]] >= left) {
                left = mp[s[right]] + 1; // move left pointer
            }
            mp[s[right]] = right;
            maxLen = max(maxLen, right - left + 1);
        }
        return maxLen;
    }
};

int main() {
    Solution sol;
    string s = "abcabcbb";
    cout << "Input: " << s << endl;
    cout << "Longest substring length = " << sol.lengthOfLongestSubstring(s) << endl;

    s = "bbbbb";
    cout << "Input: " << s << endl;
    cout << "Longest substring length = " << sol.lengthOfLongestSubstring(s) << endl;

    s = "pwwkew";
    cout << "Input: " << s << endl;
    cout << "Longest substring length = " << sol.lengthOfLongestSubstring(s) << endl;

    return 0;
}
