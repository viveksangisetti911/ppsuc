#include<stdio.h>

int main() {
    int a[] = {7, 18, 45, 49, 50, 56, 69};
    int n = sizeof(a) / sizeof(a[0]);
    int key = 18;
    int found = 0;
    int i;
    for (i = 0; i < n; i++) {
        if (a[i] == key) {
            printf("Element %d found at position %d\n", key, i + 1);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Element %d not found in the array\n", key);
    }

    return 0;
}

