class Solution
{
public:
    int maxConsecutiveAnswers(string v, int k)
    {
        int n = v.size(), st = 0, ans = 0, Tcnt = 0, Fcnt = 0, maxi = 0;
        for (int end = 0; end < n; end++)
        {
            if (v[end] == 'T')
                Tcnt++;
            else
                Fcnt++;
            maxi = max(Tcnt, Fcnt);
            while (st <= end && (end - st + 1 - maxi) > k)
            {
                if (v[st] == 'T')
                    Tcnt--;
                else
                    Fcnt--;
                maxi = max(Tcnt, Fcnt);
                st++;
            }
            ans = max(ans, end - st + 1);
        }
        return ans;
    }
};