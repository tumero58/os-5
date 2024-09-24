#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *custom_realloc(void *arr, size_t size) {
    void *new_arr = malloc(size);
    memcpy(new_arr, arr, size);
    free(arr);

    return new_arr;
}

int main() {
    int *numbers;
    int originalSize = 5;

    numbers = (int *)malloc(originalSize * sizeof(int));
    for (int i = 0; i < originalSize; i++) {
        numbers[i] = i;
    }

    int newSize = 10;
    numbers = (int *)custom_realloc(numbers, newSize * sizeof(int));
    for (int i = originalSize; i < newSize; i++) {
        numbers[i] = i;
    }

    for (int i = 0; i < newSize; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    free(numbers);

    return 0;
}