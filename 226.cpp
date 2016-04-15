void exchange(TreeNode* node){
        TreeNode* tmp;
        if (node == NULL)
            return;
        tmp  = node->left;
        node->left = node->right;
        node->right = tmp;
        exchange(node->left);
        exchange(node->right);
    }
    TreeNode* invertTree(TreeNode* root) {
        exchange(root);
        return root;
    }