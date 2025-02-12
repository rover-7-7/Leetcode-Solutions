class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string> > mp;
        for(int i=0;i<strs.size();i++){
            string h=strs[i];
            sort(h.begin(),h.end());
            mp[h].push_back(strs[i]);
        }
        vector<vector<string>> ans;
        for(auto i:mp){
         ans.push_back(i.second);

        }
        return ans;
    }
};