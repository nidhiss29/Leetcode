class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int no=0 ;
        int len = nums.size();
        for(int i =0;i<=len;i++){
          if( find(nums.begin(),nums.end(),i) == nums.end())   //simply find() if not return
          {     no = i;
              break; }
        }
        return no;
    }
};