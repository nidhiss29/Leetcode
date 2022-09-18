class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
      vector<int> a;
       
         for (int i=0; i<nums.size(); i += 2) {
            for (int j=0; j<nums[i]; j++) {
                a.push_back(nums[i+1]);         // basic apprpach
            }
        }
        return a; 
        
        
/*    //optimized 2 line by insert function (pos,size(how many times),valueto be inserted)
        
     vector<int> result;   
    for(int i = 0; i < nums.size(); i = i+2){
            result.insert(result.end(), nums[i], nums[i+1]);
        }
        return result; */
    }
};


/*class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> output;int freq =0;
        for(int i=0; i<nums.size()-1;i=i+2)
        {
            freq = nums[i];
            while(freq>0)
            {
                output.push_back(nums[i+1]);
                freq--;
            }
        }
        return output;
    }
};
*/ //This also works