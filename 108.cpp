	TreeNode* sortedArrayToBST(vector<int>& nums) {

        	return buildBST(nums, 0, nums.size()-1);

    	}

    

	TreeNode* buildBST(vector<int>& nums, int start, int end){

        	if (start > end)

            	return NULL;

        	if (end == start)

            	return new TreeNode(nums[start]);

        	int mid = (start+end)/2;

        	TreeNode * node = new TreeNode(nums[mid]);

        	node->left = buildBST(nums, start, mid-1);

        	node->right = buildBST(nums, mid+1, end);

        	return node;

    	} 
