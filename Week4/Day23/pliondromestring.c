#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    int start = 0;
    int end = strlen(str) - 1;
    int palindrome = 1;

    while (start < end) {
        if (str[start] != str[end]) {
            palindrome = 0;
            break;
        }
        start++;
        end--;
    }

    if (palindrome)
        printf("Palindrome String");
    else
        printf("Not a Palindrome String");

    return 0;
}