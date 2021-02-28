//https://leetcode.com/explore/challenge/card/february-leetcoding-challenge-2021/587/week-4-february-22nd-february-28th/3652/

class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {

        vector<pair<int,int>> v;
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> q;
        int ans = 0;
        
        for(int i=0;i<nums.size();i++){
            m[nums[i]] = i;
            q.push({nums[i],i});
        }
        
        while(!q.empty()){
            v.push_back({q.top().first,q.top().second});
            q.pop();
            
        }
        
        int high = INT_MIN, low = INT_MAX, k=0;
        for(auto i:v){
            cout<<i.first<<" "<<i.second<<endl;
            if(i.second != k){
                high = max(high, k);
                low = min(low, k);
                ans = max(ans, high-low+1);
            }
               k++; 
        }
        cout<<high<<" "<<low<<endl;
        
            
            return ans;
    }
};
