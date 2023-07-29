#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin >> n;
        
        vector<int> arr(n);
        for(int &i : arr) cin >> i;
        
        int mx = *max_element(arr.begin(), arr.end());
        for(int &i : arr)
            i += mx;
            
        for(int i : arr)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}
