#include <stdio.h>

int main() {
    int arr[5];
    int n = 5;
    int i, j, temp;


    printf("Enter the %d elements of the array:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);

        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input. Exiting.\n");
            return 1;
        }
    }


    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {

                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("\nSorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");


    int key, low = 0, high = n - 1, mid;
    int found = 0;

    printf("Enter the element to search: ");
    if (scanf("%d", &key) != 1) {
        printf("Invalid input. Exiting.\n");
        return 1;
    }

    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == key) {
            printf("Element %d found at position %d\n", key, mid + 1);
            found = 1;
            break;
        } else if (key < arr[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    if (!found) {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}
