//https://leetcode.com/explore/challenge/card/february-leetcoding-challenge-2021/584/week-1-february-1st-february-7th/3631/

class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        unordered_map<int,int> m;
        int l = s.length();
        vector<int> v(l);
        int c_position = l;
        
        for(int i=0;i<l;i++){
           if(s[i] == c){
               c_position = i;
           }
            v[i] = i - c_position ;
        }
        
        for(int i=l-1;i>=0;i--){
           if(s[i] == c){
               c_position = i;
           }
            v[i] = min(abs(v[i]), abs(c_position-i)) ;
        }
        
        return v;
    }
};
