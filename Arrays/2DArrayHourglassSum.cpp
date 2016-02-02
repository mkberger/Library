#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    vector< vector<int> > arr(6,vector<int>(6));
    for(int arr_i = 0;arr_i < 6;arr_i++){
       for(int arr_j = 0;arr_j < 6;arr_j++){
          cin >> arr[arr_i][arr_j];
       }
    }
    // mkberger
    int largest_sum, hourglass_sum;
    largest_sum = hourglass_sum = (-9*7); //array values from -9 to 9
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            hourglass_sum =  arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
            if(hourglass_sum > largest_sum) largest_sum = hourglass_sum;
            hourglass_sum = 0;
        }
    }
    cout << largest_sum;
    //
    return 0;
}
