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
            { // it's not strictly increasing
                if (used)
                    return false;
                // we haven't used the element removal yet.
                used = true;
                if (i == 1 || nums[i] > nums[i - 2]) // we remove the element from i - 1 position because it's bigger, so we update previous.
                    previous = nums[i];
                // else we remove current element and leave previous to it's existing value.
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
        if (isIncreasing(removeElement(nums, i)))
            return true;
    return false;
}
vector<int> removeElement(vector<int> &nums, int removedPoz){
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++)
        if (i != removedPoz)
            ans.push_back(nums[i]);
    return ans;
}
bool isIncreasing(vector<int> nums){
    for (int i = 1; i < nums.size(); i++)
        if (nums[i] <= nums[i - 1])
            return false;
    return true;
}



 */