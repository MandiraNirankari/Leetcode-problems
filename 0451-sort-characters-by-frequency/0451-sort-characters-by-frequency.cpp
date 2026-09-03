class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> freq;
        for(int c:s){
            freq[c]++;
        }

        vector<pair<char,int>> chars(freq.begin(),freq.end());

        sort(chars.begin(),chars.end(),[](pair<char,int> a, pair<char,int> b){
            return a.second>b.second;
        });

        string ans="";
        for(auto p:chars){
            for(int i=0;i<p.second;i++){
                ans+=p.first;
            }
        }
        return ans;
    }
};