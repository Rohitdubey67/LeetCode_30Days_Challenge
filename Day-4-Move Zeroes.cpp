/*
Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Example:

Input: [0,1,0,3,12]
Output: [1,3,12,0,0]
Note:

1.You must do this in-place without making a copy of the array.
2.Minimize the total number of operations.
*/

class Solution {
public:
    void moveZeroes(vector<int>& a) {
        int i,j=0;
        for(i=0;i<a.size();i++)
        {
          if(a[i]!=0)
          {
              swap(a[i],a[j]);
              j++;
          }
        }
    }
};
