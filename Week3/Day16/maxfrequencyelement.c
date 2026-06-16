#include <stdio.h>

int main() {
    int n, i, j;
    int maxFreq = 0, element;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    int visited[n];

    printf("Enter elements:\n");

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        visited[i] = 0;
    }

    for(i = 0; i < n; i++) {

        if(visited[i] == 1)
            continue;

        int count = 1;

        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
                visited[j] = 1;
            }
        }

        if(count > maxFreq) {
            maxFreq = count;
            element = arr[i];
        }
    }

    printf("Maximum Frequency Element = %d", element);
    printf("\nFrequency = %d", maxFreq);

    return 0;
}