#include <stdio.h>
#include <stdlib.h>

#define MAX 100  // maximum capacity of the array

/* Function prototypes */
void traverse(int arr[], int n);
int insert_at_index(int arr[], int *n, int value, int index);
int delete_at_index(int arr[], int *n, int index);
void search_value(int arr[], int n, int value);

int main() {
    int arr[MAX];
    int n = 0;       // current number of elements
    int choice;
    int value, index;
    int initialCount, i;

    printf("Enter initial number of elements (0 to %d): ", MAX);
    if (scanf("%d", &initialCount) != 1 || initialCount < 0 || initialCount > MAX) {
        printf("Invalid count. Exiting.\n");
        return 1;
    }

    if (initialCount > 0) {
        printf("Enter %d element(s):\n", initialCount);
        for (i = 0; i < initialCount; ++i) {
            printf("arr[%d]: ", i);
            scanf("%d", &arr[i]);
        }
        n = initialCount;
    }

    while (1) {
        printf("\n--- Array Operations Menu ---\n");
        printf("1. Traverse (display array)\n");
        printf("2. Insert (at index)\n");
        printf("3. Delete (at index)\n");
        printf("4. Search (value)\n");
        printf("5. Exit\n");
        printf("Choose an option: ");
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Exiting.\n");
            break;
        }

        switch (choice) {
            case 1:
                traverse(arr, n);
                break;

            case 2:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                printf("Enter index to insert at (0 to %d): ", n); // insertion allowed at n (append)
                scanf("%d", &index);
                if (insert_at_index(arr, &n, value, index))
                    printf("Inserted %d at index %d.\n", value, index);
                else
                    printf("Insertion failed (array full or invalid index).\n");
                break;

            case 3:
                if (n == 0) {
                    printf("Array is empty. Nothing to delete.\n");
                    break;
                }
                printf("Enter index to delete (0 to %d): ", n - 1);
                scanf("%d", &index);
                if (delete_at_index(arr, &n, index))
                    printf("Deleted element at index %d.\n", index);
                else
                    printf("Deletion failed (invalid index).\n");
                break;

            case 4:
                if (n == 0) {
                    printf("Array is empty.\n");
                    break;
                }
                printf("Enter value to search: ");
                scanf("%d", &value);
                search_value(arr, n, value);
                break;

            case 5:
                printf("Exiting.\n");
                return 0;

            default:
                printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}

/* Display array elements */
void traverse(int arr[], int n) {
    if (n == 0) {
        printf("Array is empty.\n");
        return;
    }
    printf("Array elements (n = %d): ", n);
    for (int i = 0; i < n; ++i) {
        printf("%d", arr[i]);
        if (i < n - 1) printf(", ");
    }
    printf("\n");
}

/* Insert value at given index (0 <= index <= n). Returns 1 on success, 0 on failure. */
int insert_at_index(int arr[], int *n, int value, int index) {
    if (*n >= MAX) return 0;              // overflow
    if (index < 0 || index > *n) return 0; // invalid index (allow index == n for append)

    // shift right from the end
    for (int i = *n - 1; i >= index; --i) {
        arr[i + 1] = arr[i];
    }
    arr[index] = value;
    (*n)++;
    return 1;
}

/* Delete element at index. Returns 1 on success, 0 on failure. */
int delete_at_index(int arr[], int *n, int index) {
    if (*n <= 0) return 0;               // underflow
    if (index < 0 || index >= *n) return 0; // invalid index

    // shift left to overwrite
    for (int i = index; i < *n - 1; ++i) {
        arr[i] = arr[i + 1];
    }
    (*n)--;
    return 1;
}

/* Search for all occurrences of value and print positions */
void search_value(int arr[], int n, int value) {
    int found = 0;
    printf("Searching for %d... ", value);
    for (int i = 0; i < n; ++i) {
        if (arr[i] == value) {
            if (!found) printf("\nFound at index(es): ");
            printf("%d ", i);
            found = 1;
        }
    }
    if (!found) printf("Not found.\n");
    else printf("\n");
}
