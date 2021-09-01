//https://leetcode.com/explore/challenge/card/july-leetcoding-challenge-2021/611/week-4-july-22nd-july-28th/3829/

class Solution {
public:
    vector<int> beautifulArray(int n) {
        vector<int> ans;
        ans.push_back(1);
        
        while(ans.size() < n){
            vector<int> temp;
            for(int i:ans){
                if(2*i - 1 <= n){
                    temp.push_back(2*i - 1);
                }
            }
            for(int i:ans){
                if(2*i <= n){
                    temp.push_back(2*i);
                }
            }
            ans = temp;
        }
        
        return ans;
    }
};