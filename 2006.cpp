int countKDifference(vector<int> &nums, int k)
{
    int cnt[101] = {}, res = 0;
    for (auto n : nums)
        ++cnt[n];
    for (int i = k + 1; i < 101; ++i)
        res += cnt[i] * cnt[i - k];
    return res;
}

/* OPTIMIZED
int countKDifference(vector<int>& nums, int k) {
    int cnt[101] = {}, res = 0;
    for (auto n : nums)
        ++cnt[n];
    for (int i = k + 1; i < 101; ++i)
        res += cnt[i] * cnt[i - k];
    return res;
}





abs(nums[i]-nums[j])=k;
if(nums[i]-nums[j]<0) then nums[j]>nums[i];

if(nums[i]-nums[j]>0) then nums[i]>nums[j];

sorting will make sure that 2 condition will never happen so we only have to concern about the 1 condition;

nums[j]>nums[i];
which mean we can write the formula in question like:
nums[j]-nums[i]=k;
nums[j]=nums[i]+k;

*/
