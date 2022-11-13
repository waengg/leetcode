// https://leetcode.com/problems/valid-parentheses/

#include <vector>
#include <iostream>
#include <stack>
#include <unordered_map>

using namespace std;
class Solution {
public:

    const char EMPTY_ELEMENT = '-';

    bool isValid(string s) {
        if (s.size() % 2 != 0) return false;
        stack<char> closeStack;
        closeStack.push(EMPTY_ELEMENT);
        unordered_map<char, char> parenthesesMap = {
            {'(', ')'},
            {'{', '}'},
            {'[', ']'},
        };

        for (int i = 0; i < s.size(); i++) {
            char p = s[i];
            if (parenthesesMap.count(p)) {
                closeStack.push(parenthesesMap[p]);
            } else {
                char element = closeStack.top();
                if (element == p) {
                    closeStack.pop();
                } else {
                    return false;
                } 
            }
        }
        if (closeStack.top() == EMPTY_ELEMENT)
            return true;
        return false;
    }
};