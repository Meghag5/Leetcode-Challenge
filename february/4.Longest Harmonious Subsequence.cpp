//https://leetcode.com/explore/challenge/card/february-leetcoding-challenge-2021/584/week-1-february-1st-february-7th/3628/

//We define a harmonious array as an array where the difference between its maximum value and its minimum value is exactly 1.
class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int> m;
        int n = nums.size();
        
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
            
        int len=0,mlen=0;
        for(int i=0;i<n;i++){
            if(m.find(nums[i]+1) != m.end()){
                len = m[nums[i]] + m[nums[i]+1];
                mlen = max(len,mlen);
            }
        }
        
        
        return mlen;
    }
};
