#include <stdio.h>
#include <stdlib.h>

int main()
{
    int originalSize = 3;
    char **strings;

    strings = (char **)malloc(originalSize * sizeof(char));
    if (strings == NULL){
        printf("Memory allocation failed");
        return 1;
    }

    for (int i = 0; i < originalSize; i++){
        strings[i] = (char *)malloc(51 * sizeof(char));
        if (strings[i] == NULL){
            printf("Memory allocation failed");
            return 1;
        }
    }

    printf("Enter 3 strings:\n");
    for (int i = 0; i < originalSize; i++){
        scanf("%s", strings[i]);
    }

    printf("The 3 strings are:\n");
    for (int i = 0; i < 3; i++) {
        printf("%s\n", strings[i]);
    }

    int newSize = 5;
    strings = (char **)realloc(strings, newSize * sizeof(char *));

        for (int i = originalSize; i < newSize; i++) {
        strings[i] = (char *)malloc(51 * sizeof(char));
        if (strings[i] == NULL) {
            printf("Memory allocation failed");
            return 1;
        }
    }

    printf("Enter 2 more strings:\n");
    for (int i = originalSize; i < newSize; i++) {
        scanf("%s", strings[i]);
    }

    printf("All strings:\n");
    for (int i = 0; i < newSize; i++) {
        printf("%s\n", strings[i]);
    }

    for (int i = 0; i < originalSize; i++) {
        free(strings[i]);
    }
    free(strings);

    return 0;
}