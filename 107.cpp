vector<vector<int>> result;
    void levelTra(TreeNode* root, int level){
        if (root == NULL){
            return;
        }
        if (level == result.size()){
            vector<int> v;
            result.push_back(v);
        }
        result[level].push_back(root->val);
        levelTra(root->left, level+1);
        levelTra(root->right, level+1);
    }
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        levelTra(root, 0);
        return vector<vector<int>>(result.rbegin(), result.rend());
    }