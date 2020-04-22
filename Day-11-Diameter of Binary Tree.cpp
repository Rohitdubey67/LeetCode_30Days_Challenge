/*
Given a binary tree, you need to compute the length of the diameter of the tree. The diameter of a binary tree is the length of the longest path between any two nodes in a tree. This path may or may not pass through the root.

Example:
Given a binary tree
          1
         / \
        2   3
       / \     
      4   5    
Return 3, which is the length of the path [4,2,1,3] or [5,2,1,3].

Note: The length of path between two nodes is represented by the number of edges between them
*/

class Solution {
public:
    int d;
    int diameterOfBinaryTree(TreeNode* root) {
         d=1;
        len(root);
        return d-1;
    }
    int len(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        int l=len(root->left);
        int r=len(root->right);
         d=max(l+r+1,d);
        return 1+max(l,r);
    }
};
