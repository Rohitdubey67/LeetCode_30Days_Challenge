/*
You are given a string s containing lowercase English letters, and a matrix shift, where shift[i] = [direction, amount]:

direction can be 0 (for left shift) or 1 (for right shift). 
amount is the amount by which string s is to be shifted.
A left shift by 1 means remove the first character of s and append it to the end.
Similarly, a right shift by 1 means remove the last character of s and add it to the beginning.
Return the final string after all operations.

 

Example 1:

Input: s = "abc", shift = [[0,1],[1,2]]
Output: "cab"
Explanation: 
[0,1] means shift to left by 1. "abc" -> "bca"
[1,2] means shift to right by 2. "bca" -> "cab"
Example 2:

Input: s = "abcdefg", shift = [[1,1],[1,1],[0,2],[1,3]]
Output: "efgabcd"
Explanation:  
[1,1] means shift to right by 1. "abcdefg" -> "gabcdef"
[1,1] means shift to right by 1. "gabcdef" -> "fgabcde"
[0,2] means shift to left by 2. "fgabcde" -> "abcdefg"
[1,3] means shift to right by 3. "abcdefg" -> "efgabcd"
 */
class Solution {
public:
    string stringShift(string s, vector<vector<int>>& a) {
        int i,j,k,n;
        for(i=0;i<a.size();i++)
        {
          n=(a[i][1])%s.size();
            if(n>0)
            {
            char c[n];
            if(a[i][0]==0)
            {
                for(j=0;j<n;j++)
                {
                    c[j]=s[j];
                }
                for(j=n;j<s.size();j++)
                {
                    s[j-n]=s[j];
                }
                k=0;
                for(j=s.size()-n;j<s.size();j++)
                {
                    s[j]=c[k++];
                }
                //cout<<s<<endl;
            }
            else
            {
                k=0;
               for(j=s.size()-n;j<s.size();j++)
               {
                   c[k++]=s[j];
               }
                for(j=s.size()-n;j>=0;j--)
                {
                    s[j+n]=s[j];
                }
                for(j=0;j<n;j++)
                    s[j]=c[j];
                //cout<<s<<endl;
            }
            }
        }
        //cout<<s<<endl;
        string p="";
        for(i=0;i<s.size();i++)
            p+=s[i];
        return p;
    }
};
