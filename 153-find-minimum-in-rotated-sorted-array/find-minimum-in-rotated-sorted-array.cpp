class Solution {
public:
    int findMin(vector<int>& nums) {

        int l = 0;
        int h = nums.size() - 1;
        int n = nums.size();
        while (l <= h) {
            int mid = (l + h) / 2;
            int prev = (mid - 1 + n) % n;
            int next = (mid + 1) % n;

            if (nums[prev] >= nums[mid] && nums[next] >= nums[mid])
                return nums[mid];

            if (nums[mid]>nums[h])l=mid+1;
            else h=mid-1;
        }
        return -1;
    }
};