//lc 101
class Solution {
public:
    bool sameTree(TreeNode*p, TreeNode* q){
        if(!p and !q)return true;
        if(!p or !q) return false;
        if(p->val!=q->val)return false;
        return sameTree(p->left, q->right) and sameTree(p->right, q->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(!root)return true;
        return sameTree(root->left, root->right);
    }
};
