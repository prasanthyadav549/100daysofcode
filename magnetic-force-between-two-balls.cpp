class Solution
{
public:
    bool arrangeBalls(vector<int> &position, int balls, int minDistance)
    {
        int cnt = 1, lastPlaced = position[0];
        for (int i = 1; i < position.size(); i++)
        {
            if ((position[i] - lastPlaced) >= minDistance)
            {
                cnt++;
                lastPlaced = position[i];
            }
        }
        return cnt >= balls;
    }
    int maxDistance(vector<int> &position, int m)
    {
        int ans = -1;
        sort(position.begin(), position.end());
        int low = 1, high = position.back() - 1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (arrangeBalls(position, m, mid))
            {
                ans = mid;
                low = mid + 1;
            }
            else
                high = mid - 1;
        }
        return ans;
    }
};