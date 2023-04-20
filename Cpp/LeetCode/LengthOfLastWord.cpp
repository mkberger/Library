// https://leetcode.com/problems/length-of-last-word/description/
class Solution {
public:
    int lengthOfLastWord(string s) {
        int size = s.size() - 1;
        int trailing_spaces = 0;
        if (s[size] == ' '){
            for (int i = size; i >= 0; i--) {
                if(s[i] == ' ') {
                    trailing_spaces ++;
                }
                else {
                    break;
                }
            }
        }
        for (int i = size - trailing_spaces; i >= 0; i--) {
            if(s[i] == ' ') {
                return size - trailing_spaces - i;
            }
        }
        return size - trailing_spaces + 1;
    }
};
