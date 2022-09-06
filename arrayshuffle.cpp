// brute force

class Solution
{
public:
    vector<int> shuffle(vector<int> &nums, int n)
    {
        vector<int> res;
        for (int i = 0; i < n; i++)
            res.push_back(nums[i]), res.push_back(nums[n + i]);
        return res;
    }
};

// optimized brute force

class Solution
{
public:
    vector<int> shuffle(vector<int> &nums, int n)
    {
        for (int i = 0; i < n; i++)
        {
            nums[i + n] = nums[i] * 10000 + nums[i + n];
        }

        for (int i = 0; i < n; i++)
        {

            nums[2 * i] = nums[i + n] / 10000;
            nums[2 * i + 1] = nums[i + n] % 10000;
        }
        return nums;
    }
};

// bitwise approach
