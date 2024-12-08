#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= 3 * n - 2; i += 3) {
        printf("%d ", i);
    }

    return 0;
}
