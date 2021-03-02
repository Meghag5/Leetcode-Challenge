//https://leetcode.com/explore/challenge/card/march-leetcoding-challenge-2021/588/week-1-march-1st-march-7th/3657/

class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_map<int,int> m;
        int n = candyType.size()/2;
        
        for(int i=0;i<candyType.size();i++){
            m[candyType[i]]++;
        }
        
        int size = m.size();
        while(size < n){
            n--;
        }
        
        return n;
    }
};
