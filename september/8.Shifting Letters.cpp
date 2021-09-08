//https://leetcode.com/explore/challenge/card/september-leetcoding-challenge-2021/637/week-2-september-8th-september-14th/3968/

//approach 1(brute-force)
class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        for(int i=0;i<s.length();i++){
            for(int j=0;j<=i;j++){
                cout<<char(((int)(s[j]-'a') + shifts[i])%26 + 'a')<<" ";
                s[j] = char(((int)(s[j]-'a') + shifts[i])%26 + 'a');
                //s[i] = s[j];
                //s[j] = char(((int)(s[j]-'a' ) + shifts[i])%27);
                
            }
            cout<<endl;
        }
        
        return s;
    }
};

//approach 2( O(n) )
class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        int shift = 0;

        for(int i=s.length()-1;i>=0;i--){
            //cout<<char(((int)(s[j]-'a') + shifts[i])%26 + 'a')<<" ";
            shift = (shift+shifts[i])%26;
            s[i] = char(((int)(s[i]-'a') + shift)%26 + 'a');
        }
        
        return s;
    }
};