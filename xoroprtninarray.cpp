class Solution
{
public:
    int xorOperation(int n, int start)
    {
        int xor1 = 0;
        int nums[n];
        for (int i = 0; i < n; i++)
        {
            nums[i] = start + 2 * i;
        }
        for (int i = 0; i < n; i++)
        {
            xor1 ^= nums[i];
        }

        return xor1;
    }
};

// here we can initialize xor1 with either 0 or start as 0^start = start and start^start = start