#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    // mkberger
    long long int sum; sum = 0;
    for (auto x : arr) sum+=x;
    cout << sum;
    //
    return 0;
}
