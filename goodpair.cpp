//QUE 1512
class Solution
{
public:
    int numIdenticalPairs(vector<int> &nums)
    {
        int len = nums.size();
        int count = 0;
        for (int i = 0; i < len; i++)
        {
            for (int j = 0; j < len; j++)
            {
                if (i < j)
                {
                    if (nums[i] == nums[j])
                    {
                        count += 1;
                    }
                }
            }
        }

        return count;
    }
};
