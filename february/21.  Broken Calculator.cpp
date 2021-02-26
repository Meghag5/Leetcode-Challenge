//https://leetcode.com/explore/challenge/card/february-leetcoding-challenge-2021/586/week-3-february-15th-february-21st/3647/

class Solution {
public:
    int brokenCalc(int X, int Y) {
        int ans = 0;

        if(X>=Y){
            return X-Y;
        }
        
        if(Y%2 == 0){
            return 1 + brokenCalc(X,Y/2);
        }
        else      
        return 1 + brokenCalc(X,Y+1);
    }
};
