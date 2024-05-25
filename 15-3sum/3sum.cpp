class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& v) {
     set<vector<int>> st;
     int n=v.size();
     sort(v.begin(),v.end());
     for(int i=0;i<n;i++){
        int j=i+1;
        int k=n-1;
        while(j<k){
            if(v[i]+v[j]+v[k]<0) j++;
            else if(v[i]+v[j]+v[k]==0){
                st.insert({v[i],v[j],v[k]});
                j++;
                k--;
            }
            else k--;
        }
     }  
     vector<vector<int>> result(st.begin(),st.end());
     return result; 
    }
};