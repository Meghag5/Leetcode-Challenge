//https://leetcode.com/explore/featured/card/february-leetcoding-challenge-2021/585/week-2-february-8th-february-14th/3636/

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> for_s;
        unordered_map<char,int> for_t;
        
        if(s.length() != t.length()){
            return false;
        }
        
        for(int i=0;i<s.length();i++){
            for_s[s[i]]++;
        }
        
        for(int i=0;i<t.length();i++){
            for_t[t[i]]++;
        }
        
        for(int i=0;i<t.length();i++){
            if(for_s.find(t[i]) == for_s.end() || for_s[t[i]] != for_t[t[i]])
                return false;
        }
        
        return true;
    }
};
