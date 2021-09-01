//https://leetcode.com/explore/challenge/card/july-leetcoding-challenge-2021/611/week-4-july-22nd-july-28th/3828/

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int temp = INT_MAX, ans;
        
        for(int i=0;i<n-2;i++){
            int low = i+1;
            int high = n-1;
            
            while(low<high){
                int sum = nums[low]+nums[high]+nums[i];
                if(sum == target){
                    return sum;
                }
                else if(sum < target){
                    low++;
                }
                else{
                    high--;
                }
                if(temp > abs(sum-target)){
                    temp = abs(sum-target);
                    ans = sum;
                }
                
            }
            
        }
        
        return ans;
    }
};