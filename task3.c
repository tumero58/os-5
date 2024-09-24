#include <stdio.h>
#include <stdlib.h>

int main(){
    int originalSize = 10;
    int *numbers;

    numbers = (int *)malloc(originalSize * sizeof(int));
    if (numbers == NULL){
        printf("Memory allocation failed");
        return 1;
    }

    printf("Enter %d integers:\n", originalSize);

    for (int i = 0; i < originalSize; i++){
        scanf("%d", &numbers[i]);
    }

    printf("Updated before resize: ");
    for (int i = 0; i < originalSize; i++){
        printf("%d ", numbers[i]);
    }
    printf("\n");

    int newSize = 5;
    numbers = (int *)realloc(numbers, newSize * sizeof(int));

    printf("Updated after resize: ");
    for (int i = 0; i < newSize; i++){
        printf("%d ", numbers[i]);
    }
    printf("\n");

    free(numbers);

    return 0;
}