#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t-- > 0) {
        int n;
        cin >> n;

        vector<int> arr(n);
        vector<int> brr(n);

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        for (int i = 0; i < n; i++)
            cin >> brr[i];

        sort(arr.begin(), arr.end());
        sort(brr.begin(), brr.end());

        bool flag = true;
        for (int i = 0; i < n; i++) {
            if (arr[i] != brr[i]) {
                flag = false;
                break;
            }
        }

        if (flag)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }

    return 0
