//QUE 13
class Solution {
public:
    int romanToInt(string s) {
        int len = s.length();
        int p=0, sum =0;
        vector<int> med(len,0);
        for(char ch :s){
            if(ch == 'I')
                med.push_back(1);
            if(ch == 'V')
                med.push_back(5);
            if(ch == 'X')
                med.push_back(10);
            if(ch == 'L')
                med.push_back(50);
            if(ch == 'C')
                med.push_back(100);   
            if(ch == 'D')
                med.push_back(500);
            if(ch == 'M')
                med.push_back(1000);
            
        }
        
       for(int i = med.size()-1; i>=0; i--){
           if(med[i]<p)
               sum = sum-med[i];
           else
               sum =sum+med[i];
           
          p = med[i];
       }
        return sum;
    }
};
