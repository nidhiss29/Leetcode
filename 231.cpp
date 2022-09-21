class Solution {
public:
    bool isPowerOfTwo(int n) {
   
   /*     if(n==1)
            return true;
        else{
       for(int i =0;i<=n/2;i++){
           if(pow(2,i) == n)
               ans = true;        //logic was ok but time limit exceed
       }
        }
        return ans;  */
   
        
   //that only log with multiples of 2 will give you a whole integer rest all will be a transcendental number,     
   if(n <= 0) return false;
       return ceil(log2(n)) == floor(log2(n));
        
        
   //another approach bit manipulation we can see all  n that are multiple of 2 have 1 true bit in them fr sure so stl lib func that count no of tue bit or no of 1 in binary is used
        
         if(n<0)return false;
        
        int bits=__builtin_popcount(n);
        
        if(bits==1)
            return true;
        return false;
        
        
      // or when 7&8 give 0 so all do same can also be done
        if(n<=0) return false;
        return ((n&(n-1))==0);
        
        
    }
};