//https://leetcode.com/problems/simplify-path/

class Solution {
public:
    string simplifyPath(string path) {
        int l = path.size();
        stack<char> s;
        
        for(int i=0;i<l;i++){
        if(s.empty() || path[i]>='a' && path[i]<='z' || path[i]>='A' && path[i]<='Z'){
                s.push(path[i]);
        }
        else if(s.top() != '/' && path[i-1] == '/' && path[i] == '/'){
            s.push(path[i]);
        }
        else if(s.top() != '/' && path[i] == '/' && path[i+1] == '.'){
            s.pop();
        }
            
        }
        
        string str;
        if(!s.empty()){
        while(!s.empty()){
            str += s.top();
             s.pop();
        }
        for(int i=0;i<str.length();i++){
            s.push(str[i]);
        }
        for(int i=0;i<str.length();i++){
            str[i] = s.top();
            s.pop();
        }
        
        }
        
        return str;
    }
};
