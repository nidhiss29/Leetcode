// https://www.youtube.com/watch?v=LuLCLgMElus&list=PLgUwDviBIf0rPG3Ictpu74YWBQ1CaBkm2&index=10
class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {
        /*         //stl function returns t if can be found next perm else false
                 int n = nums.size();
                 next_permutation(nums.begin(),nums.end());
                for(int i =0;i<nums.size();i++){
                    //no out needed as changes done in original array and that is displayed in main
                }

                */

        // brute approach
        // find all perm save them traverse and return next one;

        // likeque 46 logic

        // optimized start traversal from last find a[i]<a[i+1] then value greater to it swap then reverse
        int n = nums.size(), i, j;
        for (i = n - 2; i >= 0; i--)
        {
            if (nums[i] < nums[i + 1])
            {
                break;
            }
        }

        if (i < 0)
        {
            reverse(nums.begin(), nums.end());
        }
        else
        {
            for (j = n - 1; j > i; j--)
            {
                if (nums[j] > nums[i])
                {
                    break;
                }
            }
            swap(nums[i], nums[j]);
            reverse(nums.begin() + i + 1, nums.end());
        }
    }
};