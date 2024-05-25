class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> v;
        for(int i=0;i<=n;i++){
        bitset<32> bt(i);
        v.push_back(bt.count());
        }
        return v;
    }
};