class Solution {
public:

    int rb(vector<int>& nums,vector<int> &dp,int i,int n){
    if(i==n)return 0;
    if(i>n)return 0;

    if(dp[i]!=-1)return dp[i];
    int tk=rb(nums,dp,i+2,n)+nums[i];
    int nt=rb(nums,dp,i+1,n);
    return dp[i]=max(tk,nt);

    }
    int rob(vector<int>& nums) {
        int n=nums.size();
       vector<int> dp(n,-1);
       int i=0;
       return rb(nums,dp,i,n);
    }
};