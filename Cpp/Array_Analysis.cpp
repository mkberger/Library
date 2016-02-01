#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    // mkberger
    double positive_counter, negative_counter, zero_counter;
    //
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    // mkberger
    for (auto x : arr)
    {
        if (x < 0) negative_counter++;
        else if (x > 0) positive_counter++;
        else zero_counter++;
    }
    cout << (positive_counter/n) << endl
         << (negative_counter/n) << endl
         << (zero_counter/n) << endl;
    //
    return 0;
}
