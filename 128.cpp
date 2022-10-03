// source https://www.youtube.com/watch?v=qgizvmgeyUM
class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        // optimized O(n)

        /*        set < int > hashSet;
          for (int num: nums) {
            hashSet.insert(num);
          }

          int longestStreak = 0;

          for (int num: nums) {
            if (!hashSet.count(num - 1)) {
              int currentNum = num;
              int currentStreak = 1;

              while (hashSet.count(currentNum + 1)) {
                currentNum += 1;
                currentStreak += 1;
              }

              longestStreak = max(longestStreak, currentStreak);
            }
          }

          return longestStreak;  */
        // time limit exceed issue
        // BRUTE    O(nlogn)

        int n = nums.size();
        if (n == 0)
        {
            return 0;
        }
        sort(nums.begin(), nums.end());
        int ans = 1;
        int count = 1;
        for (int i = 1; i < n; i++)
        {
            if (nums[i] != nums[i - 1])
            {
                if (nums[i] - nums[i - 1] == 1)
                {
                    count += 1;
                }
                else
                {
                    ans = max(ans, count);
                    count = 1;
                }
            }
        }
        return max(ans, count);
    }
};