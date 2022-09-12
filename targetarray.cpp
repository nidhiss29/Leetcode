//QUE 1389
class Solution
{
public:
    vector<int> createTargetArray(vector<int> &nums, vector<int> &index)
    {
        int len = nums.size();
        vector<int> target(len, -1);
        for (int i = 0; i < index.size(); i++)
        {
            if (target[index[i]] != -1)
            {
                int j = index[i] + 1;
                int k = (len - 1);
                while (k >= j)
                {
                    target[k] = target[k - 1];
                    k--;
                }
            }
            target[index[i]] = nums[i];
        }
        return target;
    }
};

//    target.insert(target.begin() + index[i] , nums[i]);
