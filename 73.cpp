class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {   //brute force
       int m = matrix.size();
        int n = matrix[0].size();
        set<int> row;
         set<int> col;
        
        for(int i =0;i<m;i++){
            for(int j =0;j<n;j++){
                if(matrix[i][j] == 0){
                    row.insert(i);
                    col.insert(j);
                }
            }
        }
        
       
         for (int i = 0; i < m; i++) {
          for (int j = 0; j < n; j++) {
            if (row.count(i) || col.count(j)) {   //count returns 1 or 0 based on presence of element in set or not
              matrix[i][j] = 0;
            }
          }
        }   
        
        //another simple approach besides these sets use marker arrays in row 0 and column 0 and work on 3*3 matrix now if any element zero in marker then use variable x and y to show presence of zero in there from very start set these x and y
        
   /*            int n = matrix[0].size();  //col
         int m = matrix.size(); //row
        int x =1,y=1;
        
        for(int i =0;i<m;i++){
            if(matrix[i][0] == 0)  x=0;
        }
 
      for(int i =0;i<n;i++){
        if(matrix[0][i]==0) y=0;
      }
        
        
        for(int i =1;i<m;i++){
            for(int j =1;j<n;j++){
                if(matrix[i][j]==0){
                    matrix[i][0] =0;
                    matrix[0][j] = 0;
                }
                    
            }
        }
         for(int j =1 ; j<n;j++){
             if(matrix[0][j] == 0){
                 for(int i =1;i<m;i++){
                     matrix[i][j] = 0;
                 }
             }
         }
        
        for(int j =1 ; j<m;j++){
             if(matrix[j][0] == 0){
                 for(int i =1;i<n;i++){
                     matrix[j][i] = 0;
                 }
             }
         }
        if(x==0){
        for(int i =0;i<m;i++){
           matrix[i][0] =0;
        } }
         //but here implementation of logic increased complexity try other iplementation approach
        if(y==0){
        for(int i =0;i<n;i++){
           matrix[0][i] =0;
        } }  */ 
        
        
    }
};