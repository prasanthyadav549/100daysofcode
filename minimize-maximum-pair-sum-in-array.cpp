class Solution
{
public:
    int minPairSum(vector<int> &nums)
    {
        int max_pair_sum = INT_MIN;
        int min_ind = 0, max_ind = nums.size() - 1;
        sort(begin(nums), end(nums));
        while (min_ind < max_ind)
        {
            int cur_pair_sum = nums[min_ind++] + nums[max_ind--];
            max_pair_sum = max(max_pair_sum, cur_pair_sum);
        }
        return max_pair_sum;
    }
};