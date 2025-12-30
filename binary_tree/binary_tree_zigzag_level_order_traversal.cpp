//lc 103
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(!root) return {};
        queue<TreeNode*>q;
        q.push(root);
        vector<vector<int>>res;
        bool isLefttoRight= true;
        while(!q.empty()){
            int size= q.size();
            vector<int>v(size);            
            for(int i=0;i<size;i++){
                TreeNode* curr= q.front();
                q.pop();
                v[isLefttoRight?i : size-1-i]= curr->val;
                if(curr->left)q.push(curr->left);
                if(curr->right)q.push(curr->right);
            }
            isLefttoRight=!isLefttoRight;
            res.push_back(v);
        }
        return res;
    }
};
