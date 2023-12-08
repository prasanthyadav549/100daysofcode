class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans=0;
        unordered_set<int> st;
        int start=0;
        for(int end=0; end<s.size(); end++) {
            while(st.count(s[end])) {
                st.erase(s[start]);
                start++;
            }
            st.insert(s[end]);
            ans=max(ans,end-start+1);
        }
        return ans;
            
    }
};