class Solution
{
public:
    int findPairs(vector<int> &nums, int k)
    {
        // brute aproach is 2 for loops
        // optimized is hashmap unorderd_map

        // first declare map and upload values of array yha repeatition of ele h so key is ele and value is its freq

        if (k < 0)
            return 0;
        unordered_map<int, int> map; // declare
        for (int i = 0; i < nums.size(); i++)
        {
            map[nums[i]]++; // all values uploaded
        }
        int ans = 0;

        if (k == 0)
        { // mtlb same ele se sub lekin vo at diff pos as i!=j
            // so we check if value of any key is greater than 1 to yes give ciunt of those keys yani agr 1 aya 2 baar to count =1 as 1-1=0
            for (auto mp : map)
            {
                if (mp.second > 1)
                    ans++;
            }
            return ans;
        }

        else
        {
            for (auto x : map)
            {
                if (map.count(x.first - k)) // count function tells whether this value is present in map or not
                    // as ar[i]-ar[j]=k so ar[i]-k=ar[j] or ar[i] = ar[j]+k check karlo
                    //.count only works with original map declared not with auto x;
                    ans++;
            }
        }

        return ans;
    }
};