#include <vector>
#include <iostream>
#include <string>

using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return 0;
        }
        int32_t letterCount[26] = { 0 };
        for (int i = 0; i < s.length(); i++) {
            letterCount[s[i] - 'a']++;
        }
        for (int i = 0; i < t.length(); i++) {
            letterCount[t[i] - 'a']--;
        }
        for (int i = 0; i < 26; i++) {
            if (letterCount[i] != 0) return 0;
        }
        return 1;
    }
};

int main() {
    Solution s;
    string a = "abctetes";
    string b = "testeabc";
    std::cout << s.isAnagram(a, b) << std::endl;
}