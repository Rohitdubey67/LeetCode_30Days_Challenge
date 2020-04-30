/*
Given a range [m, n] where 0 <= m <= n <= 2147483647, return the bitwise AND of all numbers in this range, inclusive.

Example 1:

Input: [5,7]
Output: 4
Example 2:

Input: [0,1]
Output: 0
*/

class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        if( n>m)
            return rangeBitwiseAnd(m/2,n/2)<<1;
        else
            return m;
    }
};
