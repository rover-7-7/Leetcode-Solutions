class Solution {
public:
    
    int val(vector<int>& nums,int i,vector<int> &dp){
     if(i>=nums.size())return 0;
     if(dp[i]!=-1){
            return dp[i];
     }
     int ntk=val(nums,i+1,dp);
     int tk=val(nums,i+2,dp)+nums[i];
     return dp[i]=max(tk,ntk);
    }
    int rob(vector<int>& nums) {
        if(nums.size()==1)return nums[nums.size()-1];
        vector<int> dp(nums.size(),-1);
        int i=0;
      vector<int> v(nums.begin()+1,nums.end());
      vector<int> u(nums.begin(),nums.end()-1);
      
      int a=val(v,i,dp);
       vector<int> hp(nums.size(),-1);
       
      int b=val(u,i,hp);
    return max(a,b);




    }
};