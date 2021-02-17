//https://leetcode.com/explore/challenge/card/february-leetcoding-challenge-2021/586/week-3-february-15th-february-21st/3642/

class Solution {
public:
    vector<string> letterCasePermutation(string S) {
        string ip = S;
        string op = "";
        vector<string> v;
        solve(ip,op,v);
        
        return v;
    }
    void solve(string ip, string op, vector<string> &v){
        if(ip.length() == 0){
            v.push_back(op);
            return;
        }
        if(isalpha(ip[0])){
            string op1 = op;
            string op2 = op;
            op1.push_back(tolower(ip[0]));
            op2.push_back(toupper(ip[0]));
            ip.erase(ip.begin()+0);
            solve(ip,op1,v);
            solve(ip,op2,v);
        }
        else{
            string op1 = op;
            op1.push_back(ip[0]);
            ip.erase(ip.begin()+0);
            solve(ip,op1,v);
        }
    }
    
};
