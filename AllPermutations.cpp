#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void nextPerm(int index, vector<int>&nums, vector<vector<int>>&ans){
        if(index == nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i=index; i<nums.size(); i++){
            swap(nums[index], nums[i]);
            nextPerm(index+1, nums, ans);
            swap(nums[index], nums[i]); //simple backtracking
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        nextPerm(0, nums, ans);
        return ans;
    }
};