//https://leetcode.com/explore/challenge/card/february-leetcoding-challenge-2021/587/week-4-february-22nd-february-28th/3651/

class Solution {
public:
    int scoreOfParentheses(string S) {
        int ans = 0;
        stack<int> s;
        
        for(auto c:S){
            if(c == '('){
                s.push(ans);
                ans = 0 ;
            }
            else{
                ans = s.top() + max(ans*2,1);
                s.pop();
            }
        }
        
        return ans;
    }
};

