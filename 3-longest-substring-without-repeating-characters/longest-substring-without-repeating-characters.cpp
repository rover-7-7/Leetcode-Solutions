class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int j = 0, i = 0, ans = 0;
        set<char> st;
        while (i < s.length() and j< s.length()) {
            if (st.count(s[i]) == 0) {
                st.insert(s[i++]);
                ans = max(ans, i - j);
            } else
                st.erase(s[j++]);
        }
        return ans;
    }
};