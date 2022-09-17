class Solution
{
public:
    vector<int> singleNumber(vector<int> &nums)
    {
        unordered_map<int, int> map1;
        for (int i = 0; i < nums.size(); i++)
        {
            map1[nums[i]]++;
        }

        vector<int> num2;
        for (auto x : map1)
        {
            if (x.second == 1)
                num2.push_back(x.first);

            // aim is to check value and return key of that ele with freq 1
        }
        return num2;
    }
};