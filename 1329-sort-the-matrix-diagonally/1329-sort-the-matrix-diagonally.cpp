class Solution {
public:
    void sortdiagonal(vector<vector<int>>& mat, int row, int col){
        vector<int> diagonal;
        int m=mat.size();
        int n=mat[0].size();
        int i=row;
        int j=col;

        while(i<m && j<n){
            diagonal.push_back(mat[i][j]);
            i++;
            j++;
        }
        sort(diagonal.begin(),diagonal.end());

        i=row;
        j=col;
        int k=0;

        while(i<m && j<n){
            mat[i++][j++]=diagonal[k++];
        }
    }
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();

        for(int i=0; i<n; i++){
            sortdiagonal(mat,i,0);
            for(int j=1; j<m; j++){
                sortdiagonal(mat,0,j);
            }
        }
        return mat;
    }
};