//lc 114
//stack 
class Solution {
public:
    void flatten(TreeNode* root) {
        if(!root)return ;
        stack<TreeNode*>st;
        st.push(root);
        TreeNode* prev= NULL;
        while(!st.empty()){
            TreeNode* top = st.top();st.pop();
            if(prev){
                prev->left= NULL;
                prev->right= top;
            }
            prev=top;
            //filling , LIFO, preorder
            if(top->right)st.push(top->right);
            if(top->left)st.push(top->left);
            
        }
    }
};
