#include <stdio.h>

int main() {
    char str[100];
    char result[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int i = 0, j = 0;

    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n') {
            result[j] = str[i];
            j++;
        }
        i++;
    }

    result[j] = '\0';

    printf("String without spaces: %s", result);

    return 0;
}