#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int sum = 0;
    int *numbers;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    numbers = (int *)calloc(n, sizeof(int));
    if (numbers == NULL){
        printf("Memory allocation failed");
        return 1;
    }

    printf("Array after calloc: ");
    for (int i = 0; i < n; i++){
        printf("%d ", numbers[i]);
    }
    printf("\n");

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++){
        scanf("%d", &numbers[i]);
    }

    printf("Updated array: ");
    for (int i = 0; i < n; i++){
        printf("%d ", numbers[i]);
    }
    printf("\n");

    for (int i = 0; i < n; i++){
        sum += numbers[i];
    }
    double average = (double)sum / n;
    printf("Average of the array: %.2f\n", average);

    free(numbers);

    return 0;
}