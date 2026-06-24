#include <stdio.h>

int main() {
    char sentence[200];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    int words = 0;
    int i = 0;

    while (sentence[i] != '\0') {
        if ((i == 0 && sentence[i] != ' ' && sentence[i] != '\n') ||
            (sentence[i] != ' ' && sentence[i] != '\n' && sentence[i - 1] == ' ')) {
            words++;
        }
        i++;
    }

    printf("Total Words = %d", words);

    return 0;
}