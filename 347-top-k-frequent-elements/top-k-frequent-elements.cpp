class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++)mp[nums[i]]++;

        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> hp;

for(auto i: mp){
    hp.push({i.second,i.first});
    if(hp.size()>k)hp.pop();
}
vector<int> v;
while(hp.size()>0){
v.push_back(hp.top().second);
hp.pop();

}
return v;

    }
};