/*
Given a 2D binary matrix filled with 0's and 1's, find the largest square containing only 1's and return its area.

Example:

Input: 

1 0 1 0 0
1 0 1 1 1
1 1 1 1 1
1 0 0 1 0

Output: 4
*/

class Solution {
public:
    int maximalSquare(vector<vector<char>>& a) {
        int n=a.size(),k=0;
        if(n==0)
            return 0;
        int m=a[0].size();
        int i,j;
        int t[n+1][m+1];
        for(i=0;i<=n;i++)
        {
            for(j=0;j<=m;j++)
            {
                 t[i][j]=0;
              if(i>0&&j>0)
              {
                  if(a[i-1][j-1]=='1')
                  {
                      t[i][j]=min(t[i-1][j-1],min(t[i-1][j],t[i][j-1]))+1;
                      k=max(k,t[i][j]);
                  }
              }
                    
            }
        }
        return k*k;
    }
};
