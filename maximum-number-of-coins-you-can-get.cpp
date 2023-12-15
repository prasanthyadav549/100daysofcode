class Solution
{
public:
    int maxCoins(vector<int> &piles)
    {
        sort(piles.rbegin(), piles.rend());
        int my_score = 0, my_pointer = 1, bob_pointer = piles.size() - 1;
        while (my_pointer < bob_pointer)
        {
            my_score += piles[my_pointer];
            my_pointer += 2;
            bob_pointer--;
        }
        return my_score;
    }
};