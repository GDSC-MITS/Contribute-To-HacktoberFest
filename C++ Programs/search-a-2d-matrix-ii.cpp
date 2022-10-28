class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int r=0,c=m-1;
        while(r<n and c>=0){
            if(matrix[r][c]==target){
                return true;
            }
            else if(matrix[r][c]<target){
                r++;
            }
            else{
                c--;
            }
        }
        return false;
    }
};
