class Solution {
public:
    int combine(int i, vector<int>& nums, int target, vector<int>& dp) {
        if (target < 0 || i >= nums.size()) {
            return 0;
        }
        if (dp[target] != -1) {
            return dp[target];
        }
        if (target == 0) {
            return 1;
        }
        int ntk = combine(i + 1, nums, target, dp);
        int tk = combine(0, nums, target - nums[i], dp);
        return dp[target] = tk + ntk;
    }
    
    int combinationSum4(vector<int>& nums, int target) {
        vector<int> dp(target + 1, -1);
        int i = 0;
        int res = combine(i, nums, target, dp);
        return res < 0 ? 0 : res;
    }
};
