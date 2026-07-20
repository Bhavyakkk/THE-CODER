class Solution {
public:

    bool searchinrow(vector<vector<int>>& mat, int target, int row) {
        int n = mat[0].size();

        int st = 0, end = n - 1;

        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (mat[row][mid] == target)
                return true;
            else if (mat[row][mid] < target)
                st = mid + 1;
            else
                end = mid - 1;
        }

        return false;
    }

    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int m = mat.size();
        int n = mat[0].size();

        int strow = 0, endrow = m - 1;

        while (strow <= endrow) {
            int midrow = strow + (endrow - strow) / 2;

            if (target >= mat[midrow][0] && target <= mat[midrow][n - 1]) {
                return searchinrow(mat, target, midrow);
            }
            else if (target > mat[midrow][n - 1]) {
                strow = midrow + 1;
            }
            else {
                endrow = midrow - 1;
            }
        }

        return false;
    }
};