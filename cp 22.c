#include <stdio.h>
#include <string.h>

int main() {
    char str1[30] = "hello";
    char str2[30] = "world";
    int choice, result;


    printf("1. Find length of str1\n");
    printf("2. Concatenate str1 and str2\n");
    printf("3. Copy \"everyone\" into str2\n");
    printf("4. Compare str1 and str2\n");
    printf("5. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Length of str1: %lu\n", strlen(str1));
            break;

        case 2:
            strcat(str1, str2);
            printf("After concatenation: %s\n", str1);
            break;

        case 3:
            strcpy(str2, "everyone");
            printf("Copied string: %s\n", str2);
            break;

        case 4:
            result = strcmp(str1, str2);
            printf("Comparison result: %d\n", result);
            break;

        case 5:
            printf("Exiting program...\n");
            return 0;

        default:
            printf("Invalid choice! Please enter a valid option.\n");
    }

    return 0;
}
