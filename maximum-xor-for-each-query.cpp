class Solution {
public:
    vector<int> getMaximumXor(vector<int>& v, int m) {
        int ma=1<<m;
        ma-=1;
        int n=v.size(),i=0,x=0;
        vector<int> ans(n,0);
        for(; i<n; i++){
            x=(x^v[i]);
        }
        for(i=0; i<n; i++){
       int k=(x^ma);
            ans[i]=k;
            x^=v[n-1-i];
       }
        return ans;
    }
};