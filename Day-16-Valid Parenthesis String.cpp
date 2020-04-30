/*
Given a string containing only three types of characters: '(', ')' and '*', write a function to check whether this string is valid. We define the validity of a string by these rules:

Any left parenthesis '(' must have a corresponding right parenthesis ')'.
Any right parenthesis ')' must have a corresponding left parenthesis '('.
Left parenthesis '(' must go before the corresponding right parenthesis ')'.
'*' could be treated as a single right parenthesis ')' or a single left parenthesis '(' or an empty string.
An empty string is also valid.
Example 1:
Input: "()"
Output: True
Example 2:
Input: "(*)"
Output: True
Example 3:
Input: "(*))"
Output: True
*/
class Solution {
public:
    bool checkValidString(string s) {
       int a=0,b=0,i;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                a++;
                b++;
            }
            else if(s[i]==')')
            {
                a--;
                b--;
            }    
            else
            {
                a++;
                b--;
            }
            if(a<0)
                return 0;
            b=max(0,b);
        }
        return b==0;
    }
};
