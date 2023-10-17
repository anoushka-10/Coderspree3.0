class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
         int r = matrix.size();
         int c = matrix[0].size();
         int low=0,high=r*c-1;
         while(low<=high){
            int mid=(low+high)/2;
            int x = matrix[mid/c][mid%c];
            if(target==x)
                return true;
            else if(x>target)
                high=mid-1;
            else
                low=mid+1;
         }
         return false;
    }
};