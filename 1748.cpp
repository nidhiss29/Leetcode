class Solution
{
public:
    int sumOfUnique(vector<int> &nums)
    {
        int sum = 0;
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++)
        {
            map[nums[i]]++;
        }

        for (auto x : map)
        {
            if (x.second == 1)
                sum += x.first;
        }
        return sum;
    }
};