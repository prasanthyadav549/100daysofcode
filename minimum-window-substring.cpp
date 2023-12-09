class Solution
{
public:
    string minWindow(string s, string t)
    {
        unordered_map<char, int> mp, mp1;
        for (auto it : t)
            mp[it]++;
        int c = 0, n = t.size(), st = 0, len = s.size() + 1, ind = 0;
        for (int end = 0; end < s.size(); end++)
        {
            mp1[s[end]]++;
            if (mp.count(s[end]) && mp1[s[end]] <= mp[s[end]])
                c++;
            while (c == n)
            {
                if (len > (end - st + 1))
                {
                    len = end - st + 1;
                    ind = st;
                }
                mp1[s[st]]--;
                if (mp.count(s[st]) && mp1[s[st]] < mp[s[st]])
                    c--;
                st++;
            }
        }
        if (len == (s.size() + 1))
            return "";
        return s.substr(ind, len);
    }
};