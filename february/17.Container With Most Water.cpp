//https://leetcode.com/explore/challenge/card/february-leetcoding-challenge-2021/586/week-3-february-15th-february-21st/3643/

class Solution {
public:
    int maxArea(vector<int>& height) {
        int h = height.size();
        int low = 0;
        int high = height.size()-1;
        int ans = 0;
        
        while(low<high){
            int len = min(height[low],height[high]);
            int bre = high - low;
            ans = max(ans,len*bre);
            if(height[low]<height[high]){
                low++;
            }
            else if(height[low]>height[high]){
                high--;
            }
            else{
                low++;
                high--;
            }
        }
        
        return ans;
    }
};

