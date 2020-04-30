/*
Given a non-empty binary tree, find the maximum path sum.

For this problem, a path is defined as any sequence of nodes from some starting node to any node in the tree along the parent-child connections. The path must contain at least one node and does not need to go through the root.

Example 1:

Input: [1,2,3]

       1
      / \
     2   3

Output: 6
Example 2:

Input: [-10,9,20,null,null,15,7]

   -10
   / \
  9  20
    /  \
   15   7

Output: 42
*/

class Solution {
public:
    int sum(TreeNode* root,int*m)
    {
        if(root==NULL)
            return 0;
          int l=sum(root->left,m);
          int r=sum(root->right,m);
        int t=max(root->val,root->val+max(l,r));
        m[0]=max(m[0],max(t,l+r+root->val));
                return t; 
    }
    int maxPathSum(TreeNode* root) {
        int m[1];
        m[0]=INT_MIN;
       int k=sum(root,m);
        return m[0];
    }
};
