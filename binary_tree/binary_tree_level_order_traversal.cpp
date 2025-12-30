//lc 102
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(!root)return {};
        queue<TreeNode*>q;
        q.push(root);
        vector<vector<int>>res;
        while(!q.empty()){
            int size=q.size();
            vector<int>v;
            for(int i=0;i<size;i++){
                TreeNode* curr= q.front();
                q.pop();
                v.push_back(curr->val);

                if(curr->left)q.push(curr->left);
                if(curr->right)q.push(curr->right);
            }
            res.push_back(v);
        }
        return res;
    }
};
