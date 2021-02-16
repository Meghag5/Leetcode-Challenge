//https://leetcode.com/explore/challenge/card/february-leetcoding-challenge-2021/586/week-3-february-15th-february-21st/3641/

bool cmp(pair<int,int> &a, pair<int,int> &b){
    if(a.second < b.second){
        return true;
    }
    else if(a.second == b.second){
        return a.first < b.first;
    }
    else
    return false;
}
class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        unordered_map<int,int> mp;
        int n = mat.size();
        int m = mat[0].size();
        vector<pair<int,int>> v;
        vector<int> ans;
        
        for(int i=0;i<n;i++){
            mp[i]=0;
            for(int j=0;j<m;j++){
                if(mat[i][j] == 0){
                   break;}
                mp[i]++;
            }
        }
        
        for(auto i:mp){
            v.emplace_back(i.first,i.second);
            cout<<i.first<<" "<<i.second<<endl;
        }
        
        sort(v.begin(),v.end(),cmp);
        
        for(auto i:v){
            if(k>0)
                ans.push_back(i.first);
            k--;
        }
        
        return ans;
    }
};
