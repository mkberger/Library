#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;


int main() {
    // mkberger
    priority_queue< int, vector<int>> left_side;
    priority_queue< int, vector<int>, greater<int> > right_side;
    left_side.push(-1); // input ranges from values 0 to 10^5
    right_side.push(100001);
    int arg, count;
    double median;
    arg = median = count = 0.0;
    cin >> count;
    for(int i=0; i<count; i++)
    {
        cin >> arg;
        //insert on appropriate side
        if(arg >= right_side.top()) right_side.push(arg);
        else left_side.push(arg);
        //rebalance if sizes differ by 2
        if(left_side.size() - right_side.size() == 2)
        {
            right_side.push(left_side.top());
            left_side.pop();
        }
        else if(right_side.size() - left_side.size() == 2)
        {
            left_side.push(right_side.top());
            right_side.pop();
        }
        //get median
        if(right_side.size() == left_side.size()) median = ((left_side.top()+right_side.top())/2.0);
        else if (left_side.size() < right_side.size()) median = right_side.top();
        else median = left_side.top();
        cout << median << endl;
    }
    //
    return 0;
}
