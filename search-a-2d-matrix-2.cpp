class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &mat, int k)
    {
        int n = mat.size(), m = mat[0].size();
        int low = 0, high = n * m - 1;
        for (int i = 0; i < n; i++)
        {
            if (k >= mat[i][0] && k <= mat[i][m - 1])
            {
                if (binary_search(mat[i].begin(), mat[i].end(), k))
                    return 1;
            }
        }
        return 0;
    }
};