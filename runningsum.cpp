class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int length = nums.size();
        int sum=0;
        vector<int> runningsum(length,0);
        for(int i =0; i <length;i++){
            sum += nums[i];
            runningsum[i]=sum;
        }
        
        return runningsum;
    }
};

/*or for(int j=1 ;j<nums.size() ;j++)
    {
        nums[j]=nums[j]+nums[i] ;
        i++ ;
    }*/