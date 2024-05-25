class Solution {
public:
    void sm(TreeNode* root,int &res,int count){
     if(root==NULL) return ;
     if(root->left==NULL && root->right==NULL){
      
       if(count==1)res+=root->val;
     }
    sm(root->left,res,1);
    
     sm(root->right,res,0);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int u=0;
        sm(root,u,-1);
        return u;
    }
};