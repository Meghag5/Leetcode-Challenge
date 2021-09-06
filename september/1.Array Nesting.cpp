//https://leetcode.com/explore/challenge/card/september-leetcoding-challenge-2021/636/week-1-september-1st-september-7th/3960/

class Solution {
public:
    int visited[100005];
    int ans=0;
    void dfs(int i,int total,vector<int>& nums){
        if(visited[i] == 1){
            ans = max(ans,total);
            return;
        }
        visited[i] = 1;
        dfs(nums[i],total+1,nums);
    }
    int arrayNesting(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(visited[i] == 0){
                dfs(i,0,nums);
            }
        }
        
        return ans;
    }
};