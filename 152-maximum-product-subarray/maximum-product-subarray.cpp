class Solution {
public:
    int pr = INT_MIN;
    int curpr = 1;
    int pl = INT_MIN;
    int curpl = 1;
    int maxProduct(vector<int>& nums) {
        r(nums);
        l(nums);
        return max(pr, pl);
    }

    void r(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            curpr *= nums[i];
            pr = max(curpr, pr);
            if (curpr == 0)
                curpr = 1;
        }
    }

    void l(vector<int>& nums) {
        for (int i = nums.size()-1; i >= 0; i--) {
            curpl *= nums[i];
            pl = max(curpl, pl);
            if (curpl == 0)
                curpl = 1;
        }
    }
};