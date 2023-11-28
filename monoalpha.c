#include <stdio.h>
#include <string.h>

void encryptMonoAlphabetic(char *plainText) {
    int i;
    char substitutionKey[26];
    printf("Enter key string:    ");
    fgets(substitutionKey, sizeof(substitutionKey), stdin);
    
        for (i = 0; plainText[i] != '\0'; i++) {
                plainText[i] = substitutionKey[plainText[i] - 'A'];
    }
}

int main() {
    char plainText[100];

    printf("Enter the plain text:   ");
    fgets(plainText, sizeof(plainText), stdin);

    encryptMonoAlphabetic(plainText);

    printf("Encrypted Text: %s\n", plainText);

    return 0;
}



