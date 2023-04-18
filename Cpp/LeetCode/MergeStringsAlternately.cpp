// description of problem found at : https://leetcode.com/problems/merge-strings-alternately/description/ 
class Solution {
public:
    string mergeAlternately(string s1, string s2) {
        string s3;
        int s1Size = s1.size();
        int s2Size = s2.size();
        for(int i = 0; i < min(s1Size, s2Size); i++) {
            s3 += s1[i];
            s3 += s2[i];
        }
        if(s1Size != s2Size) {
            (s1Size < s2Size) ? s3 += s2.substr(s1Size, s2Size - s1Size) : s3 += s1.substr(s2Size, s1Size - s2Size);
        }
        return s3;
    }
};
