#include <string>
#include <cctype>
#include <algorithm>
#include <iostream>
#include <cstring>

bool isNotAlnum(char c) {
    return !std::isalnum(c);
}

// using namespace std;
class Solution {
public:
    bool isPalindrome(std::string s) {
        s.erase(std::remove_if(s.begin(), s.end(), isNotAlnum), s.end());
        int right = s.length() - 1;
        int left = 0;
        while (left <= right) {
            if (tolower(s[left]) != tolower(s[right])) {
                return 0;
            }
            left++;
            right--;
        }
        return 1;

    }
};

int main() {
    Solution s;
    std::string str = "asdasd dsadsa";
    bool result = s.isPalindrome(str);
    std::cout << str << " is palindrome? " << result << std::endl;
    return 0;
}
