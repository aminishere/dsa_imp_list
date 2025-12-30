//lc 530
// core idea  : inorder traversal of bst will give sorted node values
class Solution {
public:
    void inorder(TreeNode* root, vector<int>&v){
        if(!root)return ;
        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
    }
    int getMinimumDifference(TreeNode* root) {
        vector<int>v;
        inorder(root,v);
        int mini=INT_MAX;
        int prev= v[0];
        for(int i=1;i<v.size();i++){
            mini=min(mini, v[i]-prev);
            prev=v[i];
        }
        return mini;
    }
};
