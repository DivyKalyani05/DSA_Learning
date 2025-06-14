class Solution {
    public:
    bool solve (vector<vector<int>>& matrix,int target,int start_r,int start_c){
      

        if (start_r>=matrix.size() || start_c<0){
            return false;
        }
          if (matrix[start_r][start_c]==target){
            return true;
        }

        if (matrix[start_r][start_c]>target){
            return solve(matrix,target,start_r,start_c-1);
        }
        else{
            return solve(matrix,target,start_r+1,start_c);
        }

    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int start_r=0;
        int start_c=matrix[0].size()-1;

        return solve(matrix,target,start_r,start_c);



        

        
        
        

       
    }
};
