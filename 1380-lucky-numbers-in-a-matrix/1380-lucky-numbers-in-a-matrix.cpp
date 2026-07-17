class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            int mini=INT_MAX;
            int col=-1;
            for(int j=0;j<m;j++){
                if(matrix[i][j]<mini){
                    mini=matrix[i][j];
                    col=j;
                }
            }
            int maxi=-1;
            for(int j=0;j<n;j++){
                if(matrix[j][col]>maxi){
                    maxi=matrix[j][col];
                }
            }  
            if(maxi==mini){
                ans.push_back(maxi);
            }
        }
        return ans;
    }
};