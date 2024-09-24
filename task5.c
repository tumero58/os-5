#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int *grades;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    grades = (int *)malloc(n * sizeof(int));
    if (grades == NULL){
        printf("Memory allocation failed");
        return 1;
    }

    printf("Enter the grades:\n");

    for (int i = 0; i < n; i++){
        scanf("%d", &grades[i]);
    }

    int highestGrade = grades[0];
    int lowestGrade = grades[0];

    for (int i = 1; i < n; i++) {
        if (grades[i] > highestGrade) {
            highestGrade = grades[i];
        }
        if (grades[i] < lowestGrade) {
            lowestGrade = grades[i];
        }
    }

    printf("Highest grade: %d\n", highestGrade);
    printf("Lowest grade: %d\n", lowestGrade);

    free(grades);

    return 0;
}