#include <stdio.h>

int main() {
    int n, target;
    int i, j;
    int found = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter target sum: ");
    scanf("%d", &target);

    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {

            if(arr[i] + arr[j] == target) {
                printf("Pair Found: %d %d", arr[i], arr[j]);
                found = 1;
                break;
            }
        }

        if(found)
            break;
    }

    if(!found)
        printf("Pair Not Found");

    return 0;
}