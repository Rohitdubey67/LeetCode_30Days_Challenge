/*
Given an array of integers and an integer k, you need to find the total number of continuous subarrays whose sum equals to k.

Example 1:
Input:nums = [1,1,1], k = 2
Output: 2
*/

class Solution {
public:
    int subarraySum(vector<int>&a, int k) {
        int i,sum=0,p=0;
        unordered_map<int,int>m;
        m[0]=1;
        for(i=0;i<a.size();i++)
        {
            sum+=a[i];
             if(m.find(sum-k)!=m.end())
            {
                p+=m[sum-k];
            }
            m[sum]++;
        }
        return p;
    }
};
