#include <stdio.h>
#include <stdlib.h>

void fill_array(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        *(arr + i) = i * 2; 
    }
}

void print_array(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));  
    }
    printf("\n");
}

int main() {
    int *arr;
    int size = 5;
    
    arr = (int *)malloc(size * sizeof(int));
    
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    fill_array(arr, size);
    printf("Array values: ");
    print_array(arr, size);
    free(arr);
    
    return 0;
}
