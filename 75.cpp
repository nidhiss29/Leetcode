class Solution {
public:
    void sortColors(vector<int>& nums) {
       //brute force--> counting sort(2 way)
  /*      int z =0,one=0,two=0;
        for(int i =0;i<nums.size();i++){
           if(nums[i]==0)
               z++;
            else if(nums[i]==1)
                one++;
            else if(nums[i]==2)
                two++;
        }
        for(int i =0;i<z;i++){
            nums[i] = 0;
        }
        for(int i =0;i<one;i++){
            nums[i+z]=1;
        }
        int k = z+one;
        for(int i =0;i<two;i++){
            nums[i+k]=2;
        }    */
        
        
        //optimized dutch national flag algorithm(1 way)
       int n = nums.size();
        int low =0,mid=0;
        int high = n-1;
        
        while(mid<=high){
            
             if(nums[mid]==0){  //or besides these if we could've used switch
                
                 swap(nums[mid],nums[low]);
                 mid++;
                 low++;
                 }
            else if(nums[mid]==1){
                mid++;
                 }
            else if(nums[mid]==2){
                swap(nums[mid],nums[high]);
               high--;
               
            }
        }   
        
  /*  //by switch         
  switch (nums[mid]) { 

            // If the element is 0 
            case 0: 
                swap(nums[lo++], nums[mid++]); 
                break; 

            // If the element is 1 . 
            case 1: 
                mid++; 
                break; 

            // If the element is 2 
            case 2: 
                swap(nums[mid], nums[hi--]); 
                break; 
          */
        
    }
};