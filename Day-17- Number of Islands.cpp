/*
Given a 2d grid map of '1's (land) and '0's (water), count the number of islands. An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically. You may assume all four edges of the grid are all surrounded by water.

Example 1:

Input:
11110
11010
11000
00000

Output: 1
Example 2:

Input:
11000
11000
00100
00011

Output: 3
*/
class Solution {
public:
    int numIslands(vector<vector<char>>&a) {
         int n=a.size();
        if(n==0)
            return 0;
        int k=0,i,j;
       int  m=a[0].size();
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(a[i][j]=='1')
                {
                   dfs(a,i,j);
                    k++;
                }
            }
        }
        return k;
    }
    void dfs(vector<vector<char>>&a,int i,int j)
    {
        if( i<0 || j<0 || i>=a.size()|| j>=a[0].size() || a[i][j]!='1' )
            return ;
        a[i][j]='0';
        dfs(a,i+1,j);
        dfs(a,i-1,j);
        dfs(a,i,j+1);
        dfs(a,i,j-1);
    }
};
