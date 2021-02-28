//https://leetcode.com/explore/challenge/card/february-leetcoding-challenge-2021/587/week-4-february-22nd-february-28th/3653/

class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> s;
        int index = 0;
        
        for(int i=0;i<pushed.size();i++){
            s.push(pushed[i]);
            while(!s.empty() && s.top() == popped[index]){
                s.pop();
                index++;
            }
        }
        
        return index == popped.size()?true:false;
    }
};
