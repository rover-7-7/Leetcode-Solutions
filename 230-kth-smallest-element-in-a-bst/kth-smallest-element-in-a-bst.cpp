class Solution {
public:
    void in(TreeNode* root, int k,int &c,int &ans){
 if(root==NULL)return ;
 in(root->left,k,c,ans);
 c++;
 if(c==k)ans=(root->val);
 in(root->right,k,c,ans);

    }
    int kthSmallest(TreeNode* root, int k) {
      
        int c=0;
        int ans;
        in(root,k,c,ans);
        return ans;
    }
};