#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int sum = 0;
    int *numbers;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    numbers = (int *)malloc(n * sizeof(int));
    if (numbers == NULL){
        printf("Memory allocation failed");
        return 1;
    }

    printf("Enter %d integers:\n", n);

    for (int i = 0; i < n; i++){
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < n; i++){
        sum += numbers[i];
    }

    printf("Sum of the array: %d \n",sum);

    free(numbers);

    return 0;
}