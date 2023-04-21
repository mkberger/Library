// https://leetcode.com/problems/add-binary/description/
// Given two binary strings a and b, return their sum as a binary string.
class Solution {
public:
    string addBinary(string a, string b) {
        int a_size = a.size() - 1;
        int b_size = b.size() - 1;
        bool a_digit = false;
        bool b_digit = false;
        bool carry_over = false;
        string answer = "";
        for (int i = 0; i <=min(a_size, b_size); i++) {
            a_digit = (a[a_size - i] == '1');
            b_digit = (b[b_size - i] == '1');
            if ((!a_digit && !b_digit && !carry_over) || (carry_over && (a_digit != b_digit))) {
                answer.insert(answer.begin(), '0');
            }
            else if ((a_digit && b_digit && carry_over) || (!carry_over && (a_digit != b_digit))) {
                answer.insert(answer.begin(), '1'); 
            }
            else {
                (carry_over) ? answer.insert(answer.begin(), '1') : answer.insert(answer.begin(), '0');
                carry_over = !carry_over;  
            }
        }
        for (int i = min(a_size, b_size) + 1; i <= a_size; i++) {
            a_digit = (a[a_size - i] == '1');
            (a_digit != carry_over) ? answer.insert(answer.begin(), '1') : answer.insert(answer.begin(), '0');
            carry_over = (a_digit && carry_over) ? true : false; 
        }
        for (int i = min(a_size, b_size) + 1; i <= b_size; i++) {
            b_digit = (b[b_size - i] == '1');
            (b_digit != carry_over) ? answer.insert(answer.begin(), '1') : answer.insert(answer.begin(), '0');
            carry_over = (b_digit && carry_over) ? true : false;
        }
        if (carry_over) {
            answer.insert(answer.begin(), '1');
        }
        return answer;
    }
};
