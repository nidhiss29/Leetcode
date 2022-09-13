class Solution
{
public:
    bool canBeIncreasing(vector<int> &nums)
    {

        int previous = nums[0];
        bool used = false;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] <= previous)
            {
                if (used)
                    return false;
                used = true;
                if (i == 1 || nums[i] > nums[i - 2]) // logic 672 then i wont remove 7 so check from i-2 also if 679 then remove 9 as i>i-2
                    previous = nums[i];
            }

            else
                previous = nums[i];
        }
        return true;
    }
};

/* brute


bool canBeIncreasing(vector<int>& nums) {
    for (int i = 0; i < nums.size(); i++)
        if (Incr(removeEl(nums, i)))
            return true;
    return false;
}
vector<int> removeEl(vector<int> &nums, int removedPoz){
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++)
        if (i != removedPoz)
            ans.push_back(nums[i]);
    return ans;
}
bool Incr(vector<int> nums){
    for (int i = 1; i < nums.size(); i++)
        if (nums[i] <= nums[i - 1])
            return false;
    return true;
}



 */