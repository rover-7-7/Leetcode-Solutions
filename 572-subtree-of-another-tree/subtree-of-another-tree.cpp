class Solution {
public:
    bool issame(TreeNode* p, TreeNode* q){
    if(p==NULL && q==NULL)return true;
    if(p==NULL && q!=NULL)return false;
    if(p!=NULL && q==NULL)return false;


    if(p->val!=q->val)return false;
    return (issame(p->left,q->left) && issame(p->right,q->right));

    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root==NULL || subRoot==NULL)return false;

        if(issame(root,subRoot))return true;
        return isSubtree(root->left,subRoot)||isSubtree(root->right,subRoot); 
    }
};