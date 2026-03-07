#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], copy[100], rev[100];
    int i, len;

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    char add[200];
    strcpy(add, str1);
    strcat(add, str2);
    printf("\nAddition (Concatenation): %s", add);

    strcpy(copy, str1);
    printf("\nCopied string: %s", copy);

    len = strlen(str1);
    for(i = 0; i < len; i++) {
        rev[i] = str1[len - i - 1];
    }
    rev[len] = '\0';
    printf("\nReversed string: %s", rev);

    printf("\nLength of first string: %lu", strlen(str1));

    return 0;
}
