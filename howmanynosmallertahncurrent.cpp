class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int len = nums.size();
        vector<int> arr(len,0);
        for(int i=0;i<len;i++){
            for(int j =0;j<len;j++){
                if(nums[j]<nums[i]){
                    if(j!=i){
                        arr[i]+=1;
                    }
                }
            }
        }
        
      return arr;  
    }
};