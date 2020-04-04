/*
Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

Example:

Input: [-2,1,-3,4,-1,2,1,-5,4],
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.
*/

class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int i,m,k;
        m=INT_MIN;
        k=0;
        for(i=0;i<a.size();i++)
        {
            k+=a[i];
            if(a[i]>k)
            {
                k=a[i];
            }
            m=max(m,k);
        }
        return m;
    }
};
