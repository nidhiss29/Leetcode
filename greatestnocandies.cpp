class Solution
{
public:
    vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
    {
        int len = candies.size();
        vector<bool> result(len, 0);

        int max = *max_element(candies.begin(), candies.end());

        for (int i = 0; i < len; i++)
        {
            candies[i] += extraCandies;
            if (candies[i] >= max)
            {
                result[i] = true;
            }
            else
            {
                result[i] = false;
            }
        }

        return result;
    }
};