class Solution {
public:
    int hammingWeight(int n) {
        bitset<32> bt(n);
        cout<<bt;
        int c=0;
        for(int i=0;i<32;i++){
         if(bt[i]==1)c++;
        }
        return c;
    }
};