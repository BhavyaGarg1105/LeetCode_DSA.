class Solution {
    TreeNode* helper(TreeNode* root, int val, int depth)
    {
        if(depth == 1 && root != NULL)
        {
            TreeNode* leftNode = new TreeNode(val);
            TreeNode* rightNode = new TreeNode(val);
                TreeNode* tempLeft = root->left;
                root->left = leftNode;
                root->left->left = tempLeft;
                TreeNode* tempRight = root->right;
                root->right = rightNode;
                root->right->right = tempRight;
            
            return root;
        }
        if(root->left)
        root->left = helper(root->left,val,depth-1);
        if(root->right)
        root->right = helper(root->right,val,depth-1);
        return root;
    }
public:
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1)
        {
            TreeNode* ans =  new TreeNode(val);
            ans->left = root;
            return ans;
        }
        return helper(root,val,depth-1);
    }
};