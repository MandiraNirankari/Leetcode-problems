class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> ans(n);
        int temp=n/2;
        int start=0;
        int end=n-1;
        while(start<=end){
            ans[start]=temp;
            ans[end]=-temp;
            temp--;
            start++;
            end--;
        }
        return ans;
    }
};