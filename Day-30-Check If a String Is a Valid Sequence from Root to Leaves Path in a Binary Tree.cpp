/*
Given a binary tree where each path going from the root to any leaf form a valid sequence, check if a given string is a valid sequence in such binary tree. 

We get the given string from the concatenation of an array of integers arr and the concatenation of all values of the nodes along a path results in a sequence in the given binary tree.
*/

class Solution {
public:
    bool solve(TreeNode* root, vector<int>& a,int i)
    {
        if(!root||i>=a.size())
            return 0;
        if(root->left==NULL&&root->right==NULL)
            return (root->val==a[i])&&(i==a.size()-1);
        if(a[i]==root->val)
        {
            return solve(root->left,a,i+1)||solve(root->right,a,i+1);
        }
        return 0;
    }
    bool isValidSequence(TreeNode* root, vector<int>& a) {
        return solve(root,a,0);
    }
};
