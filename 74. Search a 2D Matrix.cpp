class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
         int row = matrix.size();
        if(row == 0){
            return false;
        }
        int col = matrix[0].size();
        int start = 0;
        int end = (row * col) - 1;
        while(start<=end){
            int mid = start + (end-start)/2;
                      //gives  row  and  col  no. respectively.
            if(target < matrix[mid/col][mid%col]){
                end = mid-1;
            }
            else if(target > matrix[mid/col][mid%col]){
                start= mid+1;
            }else{
                return true;
            }
        }
        return false;
    }
};
