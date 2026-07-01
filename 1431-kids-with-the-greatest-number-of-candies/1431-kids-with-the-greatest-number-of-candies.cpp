class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        // int n=candies.size();
        // vector<bool> result(n);
        // for(int i=0;i<n;i++){
        //     candies[i]+=extraCandies;
        //     for(int j=0;j<n;j++){ 
        //         if(candies[i]>=candies[j]){
        //             result[i]=true;
        //         }else{
        //             result[i]=false;
        //             break;
        //         }
        //     }
        //     candies[i]-=extraCandies;
        // }
        // return result;
        int n=candies.size();
        vector<bool> result(n);
        int max=candies[0];
        for(int i=1;i<n;i++){
            if(candies[i]>=max){
                max=candies[i];
            }
        }
        for(int i=0;i<n;i++){
            if(candies[i]+extraCandies>=max){
                result[i]=true;
            }else{
                result[i]=false;
            }
        }
        return result;
    }
};