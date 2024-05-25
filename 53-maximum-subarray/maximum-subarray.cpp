class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sm = INT_MIN;
        int crsm = 0;

        for (int i = 0; i < nums.size(); i++) {
            crsm += nums[i];
            sm = max(crsm, sm);
            if (crsm < 0)
                crsm = 0;
        }
        return sm;
    }
};