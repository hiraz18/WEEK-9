#include <stdio.h>

void fibonacci(int terms) {
    int a = 0, b = 1, c;
    printf("%d %d ", a, b);
    for (int i = 3; i <= terms; i++) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    fibonacci(n);
    return 0;
}

