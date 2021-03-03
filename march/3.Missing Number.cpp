//https://leetcode.com/explore/challenge/card/march-leetcoding-challenge-2021/588/week-1-march-1st-march-7th/3659/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_map<int,int> m;
        int ans;
        
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        
        for(int i=0;i<=nums.size();i++){
            if(m.find(i) == m.end())
                ans = i;
        }
        
        return ans;
    }
};2
