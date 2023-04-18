// https://leetcode.com/problems/minimum-number-of-operations-to-move-all-balls-to-each-box/description/
// BRUTE FORCE SOLUTION
class Solution {
public:
    vector<int> minOperations(string s) {
        vector<int> v;
        for(int i = 0; i < s.size(); i++) {
            int n = 0;
            for(int j = 0; j < s.size(); j++) {
                if (s[j] == '1') {
                    n += abs(i - j);
                }
            }
            v.push_back(n);
        }
        return v;    
    }
};
// TIME EFFICIENT SOLUTION
