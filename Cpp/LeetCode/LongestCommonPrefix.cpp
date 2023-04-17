// description of problem found at : https://leetcode.com/problems/longest-common-prefix/description/
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       sort(strs.begin(), strs.end());
       string first = strs[0], last = strs[strs.size()-1], lcp = "";
       for (int i = 0; i < min(first.size(), last.size()); i++) {
           if (first[i] != last[i]) {
               return lcp;
           }
           lcp += first[i];
       }
       return lcp;
    }
};
