#include <stdio.h>

int main() {
    int start, end;
    int sum5 = 0, sum7 = 0, sum11 = 0;

    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("\nNumbers divisible by 5:\n");
    for (int i = start; i <= end; i++) {
        if (i % 5 == 0) {
            printf("%d ", i);
            sum5 += i;
        }
    }
    printf("\nSum of numbers divisible by 5: %d\n", sum5);

    printf("\nNumbers divisible by 7:\n");
    for (int i = start; i <= end; i++) {
        if (i % 7 == 0) {
            printf("%d ", i);
            sum7 += i;
        }
    }
    printf("\nSum of numbers divisible by 7: %d\n", sum7);

    printf("\nNumbers divisible by 11:\n");
    for (int i = start; i <= end; i++) {
        if (i % 11 == 0) {
            printf("%d ", i);
            sum11 += i;
        }
    }
    printf("\nSum of numbers divisible by 11: %d\n", sum11);

    printf("\nTotal sum of numbers divisible by 5, 7, or 11: %d\n", sum5 + sum7 + sum11);

    return 0;
}
