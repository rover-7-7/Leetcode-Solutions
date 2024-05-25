class Solution {
public:
    int ans(TreeNode* root){
        if(root==NULL)return 0;
        int let=ans(root->left);
        int rig=ans(root->right);
        return max(let,rig)+1; 
    }
    int maxDepth(TreeNode* root) {
       return ans(root);
    }
};