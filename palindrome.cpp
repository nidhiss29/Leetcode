class Solution {
public:
    bool isPalindrome(int x) {
        int num=x;
        long int newno=0;
        if(x<0 || x>2147483647)
            return false;
        while(x>0){
           newno = newno*10;
            if(newno >2147483647)
                return false;
            newno = newno +(x%10);
                x=x/10;
        }
        
        if(newno == num)
            return true;
       else
          return false;
    }
};

//onlyfunction