// que 1929 


class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
         int length = nums.size();
        vector<int> ans(2*length,0);
       
        for(int i=0; i<length;i++)
        {
            ans[i]=nums[i];
        }
        for(int i=0; i<length;i++)
        {
            ans[i+length] = nums[i];
        }
        return ans;
        
    }
};

//onlyfunction of the problem is given here
