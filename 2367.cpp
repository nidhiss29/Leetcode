class Solution
{
public:
    int arithmeticTriplets(vector<int> &nums, int diff)
    {
        /*      int ans=0;
              for(int i=0;i<nums.size();i++){
                  for(int j=i+1;j<nums.size();j++){
                      for(int k=j+1;k<nums.size();k++){
                          if((nums[j]-nums[i])==diff && (nums[k]-nums[j])==diff){
                              ans++;
                          }
                      }
                  }
              }
              return ans;   //brute      */

        unordered_map<int, int> map;
        int cnt = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            map[nums[i]] = true;
        }

        for (int i = 0; i < nums.size(); i++)
        {
            if (map[nums[i] - diff] && map[nums[i] + diff])
                cnt++;
        }
        return cnt;
    }
};