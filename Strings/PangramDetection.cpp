#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_set>
using namespace std;


int main() {
    // mkberger
    string str;
    unordered_set<char> char_set;
    while (cin >> str)
    {
        for(auto c : str)
        {
            // input contains a-z and A-Z, but no punctuation
            if(char_set.find(tolower(c)) == char_set.end()) char_set.insert(tolower(c));
        }
    }
    int count = 0;
    for(auto x : char_set) count++;
    if (count >25) cout << "pangram" << endl;
    else cout << "not pangram " << endl;
    return 0;
    //
}
