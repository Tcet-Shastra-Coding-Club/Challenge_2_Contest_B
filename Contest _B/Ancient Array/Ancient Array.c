#include <stdio.h>
#include <stdbool.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t-- > 0) {
        int n;
        scanf("%d", &n);

        int arr[100]; // Assuming the maximum size of the array is 100
        for (int i = 0; i < n; i++)
            scanf("%d", &arr[i]);

        int sum = 0;
        bool flag = true;

        for (int i = 0; i < n; i++) {
            if (sum >= arr[i]) {
                flag = false;
                break;
            }
            sum += arr[i];
        }

        if (flag)
            printf("1\n");
        else
            printf("0\n");
    }

    return 0;
}
