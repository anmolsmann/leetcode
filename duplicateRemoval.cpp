#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l=1;
        for(int r=1; r<nums.size(); r++){
            if (nums[r-1] != nums[r]){
                nums[l] = nums [r];
                l++;
            }
        }
        return l;
    }
};