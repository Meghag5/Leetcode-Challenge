//https://leetcode.com/explore/challenge/card/february-leetcoding-challenge-2021/586/week-3-february-15th-february-21st/3646/

class Solution {
public:
    int value(char ch){
        if(ch == 'I'){
            return 1;
        }
        else if(ch == 'V'){
            return 5;
        }
        else if(ch == 'X'){
            return 10;
        }
        else if(ch == 'L'){
            return 50;
        }
        else if(ch == 'C'){
            return 100;
        }
        else if(ch == 'D'){
            return 500;
        }
        else if(ch == 'M'){
            return 1000;
        }
        return -1;
    }
    int romanToInt(string s) {
        int ans = 0;
        
        for(int i=0;i<s.length();i++){
            int temp = value(s[i]);
            if(i+1 < s.length()){
                if(temp >= value(s[i+1])){
                    ans += temp;
                }
                else{
                    ans += value(s[i+1]) - temp;
                    i++;
                }
            }
            else{
                ans += temp;
            }
        }
        
        return ans;
    }
};
