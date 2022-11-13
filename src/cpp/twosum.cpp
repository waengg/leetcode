// https://leetcode.com/problems/two-sum/

#include <vector>
#include <iostream>
#include <unordered_map>

using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (map.count(complement)) {
                return {i, map[complement]};
            }
            map[nums[i]] = i;
        }
        return {};
    }
};