//https://leetcode.com/explore/challenge/card/march-leetcoding-challenge-2021/588/week-1-march-1st-march-7th/3661/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        if(root == NULL){
            return {};
        }
        
        vector<double> v;
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            double n = q.size();
            double sum = 0;
            for(int i=0;i<n;i++){
                TreeNode* current = q.front();
                sum += current->val;
                q.pop();
                if(current->left){
                    q.push(current->left);
                }
                if(current->right){
                    q.push(current->right);
                }
            }
            double avg = sum/n;
            v.push_back(avg);
        }
        
        return v;
    }
};
