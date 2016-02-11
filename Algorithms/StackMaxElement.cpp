#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

/*
    You have an empty sequence, and you will be given N queries. Each query is one of these three types:
    
    1 x  -Push the element x into the stack.
    2    -Delete the element present at the top of the stack.
    3    -Print the maximum element in the stack.
*/

int main() {
    // mkberger
    deque<int> stack_var;
    bool update = true;
    int t;
    int arg, element, max;
    max = 0;
    cin >> t;
    for(int i=0; i < t; i++)
    {
        cin >> arg;
        if(arg == 1)
        {
            cin >> element;
            stack_var.push_front(element);
            if(element > max) max = element;
        }
        else if(arg == 2)
        {
            element = stack_var.front();
            stack_var.pop_front();
            if(element == max) update = true;
        }
        else
        {
            if(update)
            {
                max = -1;
                for (auto it = stack_var.begin(); it != stack_var.end(); it++) if(max < (*it)) max = *it; 
              update = false;
            }
            
            cout << max << endl;
        }
    }
    //
    return 0;
}
