class Solution {
public:
    vector<int> partitionLabels(string s) {
        
        int mp[26]={0},i=0,max_i=0,st=0;
           for(auto it: s) mp[it-'a']=i++;
          vector<int> ans;
           i=0;
          for(auto it: s) {
                max_i=max(max_i,mp[it-'a']);
                if(max_i==i) ans.push_back(i-st+1),st=i+1;
                i++;
          }
        return ans;
    }
};