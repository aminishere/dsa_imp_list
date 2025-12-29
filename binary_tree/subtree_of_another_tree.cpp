//lc 572
class Solution {
public:
    bool isSame(TreeNode* root, TreeNode* sroot){
        if(!root and !sroot)return true;
        if(!root or !sroot) return false;
        if(root->val != sroot->val)return false;
        return isSame(root->left, sroot->left) and isSame(root->right, sroot->right);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!subRoot)return true;
        if(!root)return false;
        if(isSame(root, subRoot))
        return true;
        return isSubtree(root->left, subRoot) or isSubtree(root->right, subRoot); //here

    }
};
