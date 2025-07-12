class Solution {
public:
    bool isValid(vector<vector<int>> &grid, int r, int c, int n, int exptval){
        if(r<0||c<0||c>=n||r>=n||grid[r][c]!=exptval){
            return false;
        }
        if(exptval==n*n-1){
            return true;
        }
        int ans1=isValid(grid,r-2,c+1,n,exptval+1);
        int ans2=isValid(grid,r-1,c+2,n,exptval+1);
        int ans3=isValid(grid,r+1,c+2,n,exptval+1);
        int ans4=isValid(grid,r+2,c+1,n,exptval+1);
        int ans5=isValid(grid,r+2,c-1,n,exptval+1);
        int ans6=isValid(grid,r+1,c-2,n,exptval+1);
        int ans7=isValid(grid,r-1,c-2,n,exptval+1);
        int ans8=isValid(grid,r-2,c-1,n,exptval+1);

        return ans1||ans2||ans3||ans4||ans5||ans6||ans7||ans8;
    }
    
    bool checkValidGrid(vector<vector<int>>& grid) {
        return isValid(grid,0,0,grid.size(),0);
    }
};