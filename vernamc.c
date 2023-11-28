#include <stdio.h>
#include <string.h>

int main() {
    int n, i, j, k, sum = 0;
    char plainText[100], key[100], ans[100];
    
    printf("Enter the message:\n");
    scanf("%s", plainText);
    
    printf("Enter the key:\n");
    scanf("%s", key);
    
    // Printing value of positions for plain text
    printf("Plain text value positions: ");
    for (i = 0; i < strlen(plainText); i++) {
        if (plainText[i] >= 'A' && plainText[i] <= 'Z')
            printf("%d ", plainText[i] - 'A');
        else if (plainText[i] >= 'a' && plainText[i] <= 'z')
            printf("%d ", plainText[i] - 'a');
    }
    printf("\n");
    
    int mod = strlen(key);
    j = 0;
    for (i = strlen(key); i < strlen(plainText); i++) {
        key[i] = key[j % mod];
        j++;
    }
    
    // Printing value of positions for the key
    printf("Key value positions: ");
    for (i = 0; i < strlen(plainText); i++) {
        if (key[i] >= 'A' && key[i] <= 'Z')
            printf("%d ", key[i] - 'A');
        else if (key[i] >= 'a' && key[i] <= 'z')
            printf("%d ", key[i] - 'a');
    }
    printf("\n");
    
    for (i = 0; i < strlen(plainText); i++) {
        // Encrypting message
        if (plainText[i] >= 'A' && plainText[i] <= 'Z')
            ans[i] = (( (plainText[i] - 'A') + (key[i] - 'A'))% 26) + 'A';
        else if (plainText[i] >= 'a' && plainText[i] <= 'z')
            ans[i] = (((plainText[i] - 'a' )+ (key[i] - 'a')) % 26) + 'a';
    }
    
    
  // Printing value of positions for the key
    printf("Encrypted Text value positions: ");
    for (i = 0; i < strlen(plainText); i++) {
        if (ans[i] >= 'A' && ans[i] <= 'Z')
            printf("%d ", ans[i] - 'A');
        else if (ans[i] >= 'a' && ans[i] <= 'z')
            printf("%d ", ans[i] - 'a');
    }
    printf("\n");
    
    
    ans[i] = '\0';
    
    printf("Encrypted message: %s\n", ans);
    
    return 0;
}

