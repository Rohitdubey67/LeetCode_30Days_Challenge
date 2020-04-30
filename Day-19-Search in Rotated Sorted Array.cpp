/*
Suppose an array sorted in ascending order is rotated at some pivot unknown to you beforehand.

(i.e., [0,1,2,4,5,6,7] might become [4,5,6,7,0,1,2]).

You are given a target value to search. If found in the array return its index, otherwise return -1.

You may assume no duplicate exists in the array.

Your algorithm's runtime complexity must be in the order of O(log n).

Example 1:

Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4
Example 2:

Input: nums = [4,5,6,7,0,1,2], target = 3
Output: -1
*/
class Solution {
public:
    int search(vector<int>& a, int t) {
        int n=a.size();
        int i,j,m,k,p;
        i=0;j=n-1;
        while(i<j)
        {
            m=(i+j)/2;
            if(a[m]>a[j])
                i=m+1;
            else
                j=m;
        }
        k=i;
        i=0;
        j=n-1;
        while(i<=j)
        {
            m=(i+j);
            p=(m+k)%n;
            if(a[p]==t)
                return p;
            else if(a[p]<t)
                i=m+1;
            else
                j=m-1;
                
        }
        return -1;
    }
    
};
