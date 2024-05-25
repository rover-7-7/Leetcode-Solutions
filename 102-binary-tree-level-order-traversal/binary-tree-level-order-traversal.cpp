class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>> res;
        if(root==NULL)return res;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            int n = q.size();
            vector<int> v;
            while (n--) {
                TreeNode* temp = q.front();
                q.pop();
                v.push_back(temp->val);
                if (temp->left != NULL)q.push(temp->left);
                if (temp->right != NULL)q.push(temp->right);
                
               }
                res.push_back(v);
                }
                return res;
                }
};