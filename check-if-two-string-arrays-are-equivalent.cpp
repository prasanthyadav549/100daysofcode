class Solution
{
public:
    string convertArrayToString(vector<string> &words)
    {
        string buffer = "";
        for (auto s : words)
            buffer += s;
        return buffer;
    }
    bool arrayStringsAreEqual(vector<string> &word1, vector<string> &word2)
    {
        if (convertArrayToString(word1) == convertArrayToString(word2))
        {
            return true;
        }
        return false;
    }
};