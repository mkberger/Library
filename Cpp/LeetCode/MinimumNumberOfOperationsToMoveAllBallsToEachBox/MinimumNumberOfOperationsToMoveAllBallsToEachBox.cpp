// description of problem found at : https://leetcode.com/problems/minimum-number-of-operations-to-move-all-balls-to-each-box/description/
// BRUTE FORCE O(N^2) SOLUTION
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
// TIME EFFICIENT O(N) SOLUTION
class Solution {
public:
    vector<int> minOperations(string s) {
        vector<int> v;
        int moves_before = 0, moves_after = 0, n_before = 0, n_after = 0;
        s.insert(0, "0");
        for(int i = 0; i < s.size(); i++) {
            if (s[i] == '1') {
                moves_after += i;
                n_after ++;
            }
        }
        for(int i = 1; i < s.size(); i++) {
            moves_after -= n_after;
            if (s[i-1] == '1'){
                n_before ++;
                
            }
            moves_before += n_before;
            if(s[i] == '1') {
                n_after --;
            }
            v.push_back(moves_before + moves_after);
        }
        return v;   
    }
};
