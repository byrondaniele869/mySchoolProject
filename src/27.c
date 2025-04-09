#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n > 0) {
        for (int i = 1; i <= n; i++) {
            if (i % 2 == 0) {
                printf("*");
            } else {
                printf("#");
            }
        }
        printf("\n");
    } else {
        printf("Please enter a positive integer.\n");
    }

    return 0;
}
