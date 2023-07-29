#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int t;
    scanf("%d", &t);

    while (t-- > 0) {
        int n;
        scanf("%d", &n);

        int arr[100], brr[100]; // Assuming the maximum size of the arrays is 100
        for (int i = 0; i < n; i++)
            scanf("%d", &arr[i]);

        for (int i = 0; i < n; i++)
            scanf("%d", &brr[i]);

        qsort(arr, n, sizeof(int), compare);
        qsort(brr, n, sizeof(int), compare);

        bool flag = true;
        for (int i = 0; i < n; i++) {
            if (arr[i] != brr[i]) {
                flag = false;
                break;
            }
        }

        if (flag)
            printf("true\n");
        else
            printf("false\n");
    }

    return 0;
}
