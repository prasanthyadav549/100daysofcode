class Solution
{
public:
    vector<int> pivotArray(vector<int> &nums, int pivot)
    {
        int n = nums.size(), right = n - 1, cnt = 0, arrangeIndex = 0;
        if (n == 1)
            return nums;
        vector<int> arranged(n);
        for (int i = 0; i < n; i++)
        {
            if (nums[i] < pivot)
                arranged[arrangeIndex++] = nums[i];
            else if (nums[i] == pivot)
                cnt++;
            if (nums[n - i - 1] > pivot)
            {
                arranged[right--] = nums[n - i - 1];
            }
        }
        while (cnt-- > 0)
            arranged[arrangeIndex++] = pivot;
        return arranged;
    }
};