class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> l(nums.size());
         vector<int> r(nums.size());
          vector<int> ans(nums.size());
        int left=1;
        int right=1;

        for(int i=0;i<nums.size();i++){
             l[i]=left;
            left=left*nums[i];
           
        }
        for(int i=nums.size()-1;i>=0;i--){
            r[i]=right;
            right=right*nums[i];
            
        }
        for(int j=0;j<nums.size();j++){
        ans[j]=l[j]*r[j];
        }
        return ans;
    }
};