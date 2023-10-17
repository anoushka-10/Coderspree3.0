class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        int x = 0;
        int n = matrix.length; 
        int m = matrix[0].length; 
        int y = (n * m) - 1; 
           while(x <= y) {
            int mid = (x + (y - x) / 2);
            if(matrix[mid/m][mid % m] == target) {
                return true;
            }
            if(matrix[mid/m][mid % m] < target) {
                x = mid + 1;
            }
            else {
                y = mid - 1;
            }
        }
        return false;
    }
}