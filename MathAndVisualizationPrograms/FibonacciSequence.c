#include <stdio.h>

void fibonacci(int n) {
    int a = 0, b = 1, next, i;
    printf("Fibonacci sequence up to %d terms:\n", n);
    for (i = 1; i <= n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
}

int main() {
    int n;
    do {
        printf("Enter the number of terms (positive integer): ");
        scanf("%d", &n);
    } while (n <= 0);
    
    fibonacci(n);
    return 0;
}
