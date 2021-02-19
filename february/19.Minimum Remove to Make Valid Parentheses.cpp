//https://leetcode.com/explore/challenge/card/february-leetcoding-challenge-2021/586/week-3-february-15th-february-21st/3645/

class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int l = s.length();
        string str;
        string ans;
        int open = 0;
        
        for(int i=0;i<l;i++){
            if(s[i] == '('){
                open++;
            }
            else if(s[i] == ')'){
                if(open == 0) continue; 
                open--;
            }
            str += s[i];
        }
        
        for(int i=str.size()-1;i>=0;i--){
            if(str[i] == '(' && open-- > 0){
                continue;
            }
            
            ans += str[i];
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
