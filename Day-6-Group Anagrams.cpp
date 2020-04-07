/*
Given an array of strings, group anagrams together.

Example:

Input: ["eat", "tea", "tan", "ate", "nat", "bat"],
Output:
[
  ["ate","eat","tea"],
  ["nat","tan"],
  ["bat"]
]
Note:

All inputs will be in lowercase.
The order of your output does not matter.
*/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>&s) {
         unordered_map<string, vector<string>>m;
      m.reserve(s.size());  
      for(const auto &i : s) {
        auto j = i;
        sort(j.begin(), j.end());
        m[j].push_back(i);  
      }
      vector<vector<string>> v(m.size());
      auto it = m.begin();
      for(int i = 0; i < v.size(); ++it, ++i)  { 
        v[i].swap(it->second);
      } 
      return v;  
    }
};
