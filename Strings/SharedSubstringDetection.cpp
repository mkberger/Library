#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_set>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    bool substr;
    string a, b;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        unordered_set<char> a_set;
        substr = false;
        cin >> a >> b;
        for(auto c : a) a_set.insert(c);
        for(auto c : b) if(a_set.find(c) != a_set.end()) substr = true;
        if(substr) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;
}
