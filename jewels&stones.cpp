class Solution
{
public:
    int numJewelsInStones(string jewels, string stones)
    {
        vector<char> v(jewels.begin(), jewels.end());
        vector<char> v2(stones.begin(), stones.end());
        int count = 0;
        for (int i = 0; i < v.size(); i++)
        {
            for (int j = 0; j < v2.size(); j++)
            {
                if (v[i] == v2[j])
                {
                    count += 1;
                }
            }
        }
        return count;
    }
};

// optimization can be done using hash map