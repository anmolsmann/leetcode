#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cur = 0;
        int maxi = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                cur++;
            } else {
                cur = 0;
            }
        maxi = max(maxi, cur);
        }
    return maxi;
    }
};