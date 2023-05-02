// https://www.hackerrank.com/challenges/matching-anything-but-new-line/problem
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <regex>
using namespace std;


int main() { 
    string s;
    regex r("[^\n]{3}\\.[^\n]{3}\\.[^\n]{3}\\.[^\n]{3}");
    cin >> s;
    cout << (regex_match(s, r) ? "true" : "false"); 
    return 0;
}
