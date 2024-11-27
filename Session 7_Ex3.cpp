#include <stdio.h>

int main() {
    int arr[5] = {2, 5, 8, 7, 10};
    int found = 0;

    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
            found = 1;
        }
    }

    if (!found) {
        printf("M?ng không ch?a s? ch?n");
    }

    printf("\n");
    return 0;
}

