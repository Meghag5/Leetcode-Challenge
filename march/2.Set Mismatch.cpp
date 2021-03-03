//https://leetcode.com/explore/challenge/card/march-leetcoding-challenge-2021/588/week-1-march-1st-march-7th/3658/

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int,int> m;
        unordered_map<int,int> m2;
        vector<int> v;
        
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size();i++){
            m2[nums[i]]++;
        }
        
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
            if(m[nums[i]] == 2){
                v.push_back(nums[i]);
                if(m.find(nums[i]-1) == m.end() && nums[i]>1){
                    v.push_back(nums[i]-1);
                }
                else{
                    int temp = nums[i];
                    while(temp>0){
                       if(m.find(temp) == m.end()){
                        v.push_back(temp);
                           return v;
                       } 
                        temp--;
                    }
                    
                    temp = nums[i];
                    while(temp>0){
                       if(m2.find(temp) == m2.end()){
                        v.push_back(temp);
                           return v;
                       } 
                        temp++;
                    }
                    
                }
            }
        }
       
        return v;
    }
};
