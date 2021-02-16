//https://leetcode.com/explore/challenge/card/february-leetcoding-challenge-2021/585/week-2-february-8th-february-14th/3637/

class Solution {
public:
    int numberOfSteps (int num) {
        int count = 0;
        
        int n = num;
        while(n){
        if(n%2==0){
            n = n/2;
        }
        else{
            n--;
        }
        count++;
        }
        
        return count;
    }
};
