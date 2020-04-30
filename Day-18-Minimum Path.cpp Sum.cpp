/*
Given a m x n grid filled with non-negative numbers, find a path from top left to bottom right which minimizes the sum of all numbers along its path.

Note: You can only move either down or right at any point in time.

Example:

Input:
[
  [1,3,1],
  [1,5,1],
  [4,2,1]
]
Output: 7
Explanation: Because the path 1→3→1→1→1 minimizes the sum.
*/
class Solution {
public:
    int minPathSum(vector<vector<int>>& a) {
        int i,j;
        int n=a.size();
        int m=a[0].size();
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(i==0&&j==0)
                {
                    
                }
                else if(i==0)
                {
                    a[i][j]+=a[i][j-1];
                }
                else if(j==0)
                {
                    a[i][j]+=a[i-1][j];
                }
                else
                    a[i][j]+=min(a[i-1][j],a[i][j-1]);
            }
        }
        return a[n-1][m-1];
    }
};
