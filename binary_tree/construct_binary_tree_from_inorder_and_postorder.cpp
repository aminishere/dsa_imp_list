//lc 106
// since its post order, root lies in the end , so we will make reverse, root from root->right->left
class Solution {
public:
    unordered_map<int,int>mp;
    int idx;
    TreeNode* helper(vector<int>postorder, int start, int end){
        if(start>end)return NULL;
        int rootv= postorder[idx--];
        int mid = mp[rootv];
        TreeNode* root = new  TreeNode(rootv);
        root->right= helper(postorder, mid+1, end);
        root->left= helper(postorder, start, mid-1);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        idx=postorder.size()-1;
        for(int i=0;i<inorder.size();i++)mp[inorder[i]]=i;
        return helper(postorder, 0, inorder.size()-1);
    }
};
