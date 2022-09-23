class Solution
{
public:
    vector<int> rearrangeArray(vector<int> &nums)
    {

        vector<int> pos;
        vector<int> neg;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] >= 0)
            {
                pos.push_back(nums[i]);
            }
            else
                neg.push_back(nums[i]);
        }

        for (int i = 0; i < pos.size(); i++)
        {
            nums[i * 2] = pos[i];
        }
        for (int i = 0; i < neg.size(); i++)
        {
            nums[i * 2 + 1] = neg[i];
        }

        return nums;
    }
};

/* int n=nums.size();
       int neg=1;
        int pos=0;
        vector<int> ans(n,0);
        for(int x:nums){
            if(x>0){
                ans[pos]=x;
                pos+=2;
            }
            if(x<0){
                ans[neg]=x;
                neg+=2;
            }
        }
        return ans; */