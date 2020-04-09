/*
Given two strings S and T, return if they are equal when both are typed into empty text editors. # means a backspace character.

Example 1:

Input: S = "ab#c", T = "ad#c"
Output: true
Explanation: Both S and T become "ac".
Example 2:

Input: S = "ab##", T = "c#d#"
Output: true
Explanation: Both S and T become "".
Example 3:

Input: S = "a##c", T = "#a#c"
Output: true
Explanation: Both S and T become "c".
Example 4:

Input: S = "a#c", T = "b"
Output: false
Explanation: S becomes "c" while T becomes "b".
*/

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int i,k;
        string a,b;
        a="";
        k=0;
        for(i=s.size()-1;i>=0;i--)
        {
            if(s[i]=='#')
                k++;
            else 
            {
                if(k>0)
                    k--;
                else
                    a+=s[i];
            }
        }
        b="";
        k=0;
        for(i=t.size()-1;i>=0;i--)
        {
            if(t[i]=='#')
                k++;
            else 
            {
                if(k>0)
                    k--;
                else
                    b+=t[i];
            }
        }
        return a==b;
    }
};
