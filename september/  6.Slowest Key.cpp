//https://leetcode.com/explore/challenge/card/september-leetcoding-challenge-2021/636/week-1-september-1st-september-7th/3965/

class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        char letter = keysPressed[0];
        int diff = releaseTimes[0];
        int ans = releaseTimes[0];
        
        for(int i=1;i<releaseTimes.size();i++){
            diff = releaseTimes[i]-releaseTimes[i-1];
            if(diff > ans){
                ans = diff;
                letter = keysPressed[i];
            }
            if(diff == ans && letter < keysPressed[i]){
                ans = diff;
                letter = keysPressed[i];
            }
        }
        
        return letter;
    }
};