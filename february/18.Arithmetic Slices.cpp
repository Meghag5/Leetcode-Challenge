//https://leetcode.com/explore/challenge/card/february-leetcoding-challenge-2021/586/week-3-february-15th-february-21st/3644/

class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& arr) {
        int n = arr.size();
        int ans = 0;
        int count = 0;
        
        for(int i=0;i+2<n;i++){
            if(arr[i+1] - arr[i] == arr[i+2] - arr[i+1]){
                count++;
            }
            else{
                ans += (count+1)*count/2;
                count = 0;
            }
        }
        
        ans += (count+1)*count/2;
        
        return ans;
    }
};
