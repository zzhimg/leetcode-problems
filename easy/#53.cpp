class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res[nums.size()];
        res[0] = nums[0];
        if(nums.size() == 1) return nums[0];
        int maxRes = res[0];
        for(int i = 1 ;i < nums.size() ;i++){
            res[i] = max(nums[i],res[i-1]+nums[i]);
            if(res[i] >  maxRes) maxRes = res[i];
        }
        return maxRes;
    }
};