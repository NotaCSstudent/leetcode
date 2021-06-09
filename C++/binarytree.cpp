   vector<int> result;
    void inorder(TreeNode* root)
    {
        if(root == nullptr)
        {
            return;
        }
        inorder(root->left);
        result.push_back(root->val);
        inorder(root->right);
        
    }
    vector<int> inorderTraversal(TreeNode* root) {
        
       
        inorder(root);
        return result;
        
    }
