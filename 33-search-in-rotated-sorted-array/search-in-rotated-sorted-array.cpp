class Solution {
public:

    int bst(int i,int j,int target,vector<int>& nums){
        int l=i;
        int h=j;

        while(l<=h){
          int mid=(l+h)/2;
          if(nums[mid]==target)return mid;
          if(nums[mid]>target){
           h=mid-1;
          }
          else l=mid+1;

        }
        return -1;
     
    }
    int search(vector<int>& nums, int target) {
        int st=mn(nums);
        cout<<st<<" ";
        int a=bst(0,st,target,nums);
        if(a!=-1)return a;
        else return bst(st,nums.size()-1,target,nums);
    }

    int mn(vector<int>& nums){
        int l = 0;
        int h = nums.size() - 1;
        int n = nums.size();
        while (l <= h) {
            int mid = (l + h) / 2;
            int prev = (mid - 1 + n) % n;
            int next = (mid + 1) % n;

            if (nums[prev] >= nums[mid] && nums[next] >= nums[mid])
                return mid;

            if (nums[mid]>nums[h])l=mid+1;
            else h=mid-1;
        }
        return -1;
    }


};