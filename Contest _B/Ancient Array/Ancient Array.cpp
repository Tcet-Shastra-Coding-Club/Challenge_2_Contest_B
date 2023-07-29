#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solve() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int &i : arr)   cin >> i;

    int sum = 0;

    for(int i = 0; i < n; i++)
    {
         if(sum >= arr[i])
             return 0;
        
        sum += arr[i];
    }
    
    return 1;
}

int main() {
    int t;
    cin >> t;
    
    while(t--)
    {
        cout << solve() << endl;
    }
    return 0;
}
