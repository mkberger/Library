// description of problem found at : https://leetcode.com/problems/roman-to-integer/description/

class Solution {
public:
    int romanToInt(string s) {
        int decimal_value = 0;
        int roman_length = s.length();
        char roman_symbol;
        for (int i = 0; i < roman_length; i++) {
            roman_symbol = s[i];
            if (roman_symbol == 'M') {
                decimal_value += 1000;
            }
            else if (roman_symbol == 'D') {
                decimal_value += 500;
            }
            else if (roman_symbol == 'C') {
                if ((i != roman_length - 1) && (s[i+1] == 'D' || s[i+1] == 'M')) {
                        decimal_value -= 100;
                }
                else {
                    decimal_value += 100;
                }
            }
            else if (roman_symbol == 'L') {
                decimal_value += 50;
            }
            else if (roman_symbol == 'X') {
                if ((i != roman_length - 1) && (s[i+1] == 'L' || s[i+1] == 'C')) {
                        decimal_value -= 10;
                }
                else {
                    decimal_value += 10;
                }
            }
            else if (roman_symbol == 'V') {
                decimal_value += 5;
            }
            else {
                if ((i != roman_length - 1) && (s[i+1] == 'V' || s[i+1] == 'X')) {
                        decimal_value -= 1;
                }
                else {
                    decimal_value += 1;
                }
            }
        }
        return decimal_value;
    }
};
