#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t-- > 0) {
        int n;
        scanf("%d", &n);

        int arr[100]; // Assuming the maximum size of the array is 100
        for (int i = 0; i < n; i++)
            scanf("%d", &arr[i]);

        int mx = arr[0];
        for (int i = 1; i < n; i++)
            mx = max(mx, arr[i]);

        for (int i = 0; i < n; i++)
            arr[i] += mx;

        for (int i = 0; i < n; i++)
            printf("%d ", arr[i]);

        printf("\n");
    }

    return 0;
}
