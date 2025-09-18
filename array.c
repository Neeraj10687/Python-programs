#include <stdio.h>

void sort(int arr[], int n) {
    int i, j, temp;
    int asc[n], desc[n];

    
    for (i = 0; i < n; i++) {
        asc[i] = arr[i];
    }

    
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (asc[i] > asc[j]) {  
                temp = asc[i];
                asc[i] = asc[j];
                asc[j] = temp;
            }
        }
    }

    printf("Array in ascending order: ");
    for (i = 0; i < n; i++) {
        printf("%d ", asc[i]);
    }
    printf("\n");

    
    for (i = 0; i < n; i++) {
        desc[i] = asc[i];
    }

    
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (desc[i] < desc[j]) {  
                temp = desc[i];
                desc[i] = desc[j];
                desc[j] = temp;
            }
        }
    }

    printf("Array in descending order: ");
    for (i = 0; i < n; i++) {
        printf("%d ", desc[i]);
    }
    printf("\n");
}


void reverse(int arr[], int n) {
    int i, temp;
    for (i = 0; i < n / 2; i++) {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    printf("Reversed array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


void search(int arr[], int n) {
    int i, element, found = 0;
    printf("Enter the element: ");
    scanf("%d", &element);

    for (i = 0; i < n; i++) {
        if (arr[i] == element) {
            printf("Element found at position %d\n", i + 1);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Element not found\n");
    }
}

void minmax(int arr[], int n) {
    int i, min = arr[0], max = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    printf("Max element is %d\n", max);
    printf("Min element is %d\n", min);
}


void mean(int arr[], int n) {
    int i, sum = 0;
    float avg;
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }
    avg = (float)sum / n;
    printf("Mean is : %f\n", avg);
}


int main() {
    int i, n, choice;
    
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    while (1) {
        printf("\nEnter your choice:\n");
        printf("1. Min and Max of array\n");
        printf("2. Reverse of array\n");
        printf("3. Search the element\n");
        printf("4. Sort the array (Ascending & Descending)\n");
        printf("5. Mean of the array\n");
        printf("6. Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                minmax(arr, n);
                break;
            case 2:
                reverse(arr, n);
                break;
            case 3:
                search(arr, n);
                break;
            case 4:
                sort(arr, n);
                break;
            case 5:
                mean(arr, n);
                break;
            case 6:
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
}