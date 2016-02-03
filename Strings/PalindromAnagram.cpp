#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_map>
using namespace std;


int main() {
    int odd = 0;
    string str; //input = lowercase string with no punctuation
    unordered_map<char, int> char_set;
    cin >> str;
    for(auto c : str) char_set[c] = (char_set.find(c) == char_set.end()) ? 1 : (char_set[c] + 1);
    for(auto x : char_set)
    {
        if(x.second % 2) odd++;
    }
    if (odd > 1) cout << "NO";
    else cout << "YES";
    return 0;
}
