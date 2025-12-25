//lc 100
//main func recursion
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p and !q)return true;
        if(!p or !q) return false;
        if(p->val != q->val) return false;
        bool leftcheck= isSameTree(p->left, q->left);
        bool rightcheck= isSameTree(p->right, q->right);
        return leftcheck and rightcheck;
    }
};
