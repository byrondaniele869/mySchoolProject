#include <stdio.h>
int main() {
    int n = 5;
    for(int i = 0; i < n; i++) {
        if(i % 2 == 0) {
            printf("*");
        } else {
            printf(" ");
        }
    }
    return 0;
}
