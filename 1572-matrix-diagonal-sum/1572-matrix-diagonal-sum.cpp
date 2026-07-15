class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int sum=0;
        int start=0,end=n-1;
        for(int i=0;i<n;i++){
            if(start==end) sum-=mat[i][start];
            sum+=mat[i][start]+mat[i][end];
            start++;
            end--;
        }
        return sum;
    }
};