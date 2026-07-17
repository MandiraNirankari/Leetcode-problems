class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int n=mat.size();
        int m=mat[0].size();
        if(n*m!=r*c) return mat;
        vector<vector<int>> ans(r,vector<int>(c));
        for(int k=0;k<n*m;k++){
            ans[k/c][k%c]=mat[k/m][k%m];
        }
        return ans;
    }
};