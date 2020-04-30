/*
Given an array nums of n integers where n > 1,  return an array output such that output[i] is equal to the product of all the elements of nums except nums[i].

Example:

Input:  [1,2,3,4]
Output: [24,12,8,6]
Constraint: It's guaranteed that the product of the elements of any prefix or suffix of the array (including the whole array) fits in a 32 bit integer.

Note: Please solve it without division and in O(n).
*/
class Solution {
public:
    vector<int> productExceptSelf(vector<int>&a) {
        int n=a.size(),i,k=1;
        vector<int>v;
        for(i=0;i<n;i++)
        {
            v.push_back(k);
            k=k*a[i];
        }
        k=1;
         for(i=n-1;i>=0;i--)
        {
            v[i]=v[i]*k;
            k=k*a[i];
        }
        return v;
    }
};
