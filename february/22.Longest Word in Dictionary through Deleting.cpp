//https://leetcode.com/explore/challenge/card/february-leetcoding-challenge-2021/587/week-4-february-22nd-february-28th/3649/

class Solution {
public:
    bool isSubsequence(string s,string temp){
        int j=0;
        for(int i=0;i<s.length();i++){
            if(s[i] == temp[j])
                j++;
            if(j == temp.size())
                break;
        }
        return j==temp.size();
    }
    string findLongestWord(string s, vector<string>& d) {
        string ans;
  
        
        for(int i=0;i<d.size();i++){
            string temp = d[i];
            
            if(ans.length() < temp.length()){
                if(isSubsequence(s,temp))
                ans = temp;
            }
            if(ans.length() == temp.length() && (ans.compare(temp) > 0)){
                if(isSubsequence(s,temp))
                ans = temp;
            }
        }
        
        return ans;
    
