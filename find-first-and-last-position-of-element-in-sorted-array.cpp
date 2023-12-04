class Solution
{
public:
    int findFirstOccurence(vector<int> &arr, int target)
    {
        int firstIndex = -1, low = 0, high = arr.size() - 1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (arr[mid] >= target)
            {
                if (arr[mid] == target)
                    firstIndex = mid;
                high = mid - 1;
            }
            else
                low = mid + 1;
        }
        return firstIndex;
    }
    int findLastOccurence(vector<int> &arr, int target)
    {
        int lastIndex = -1, low = 0, high = arr.size() - 1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (arr[mid] <= target)
            {
                if (arr[mid] == target)
                    lastIndex = mid;
                low = mid + 1;
            }
            else
                high = mid - 1;
        }
        return lastIndex;
    }
    vector<int> searchRange(vector<int> &v, int target)
    {
        int n = v.size();
        int firstIndex = findFirstOccurence(v, target);
        int lastIndex = findLastOccurence(v, target);
        if (firstIndex == -1)
            return {-1, -1};
        return {firstIndex, lastIndex};
    }
};