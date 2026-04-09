#include <stdio.h>

int main() {
    char s1[100], s2[100], s3[200], s_copy[100];
    int i, j, len = 0, equal = 1;

    printf("Enter string 1: ");
    scanf("%s", s1);
    printf("Enter string 2: ");
    scanf("%s", s2);

    for (i = 0; s1[i] != '\0'; i++) {
        len++;
    }
    printf("\nLength: %d", len);

    for (i = 0; s1[i] != '\0'; i++) {
        s_copy[i] = s1[i];
    }
    s_copy[i] = '\0';
    printf("\nCopied: %s", s_copy);

    for (i = 0; s1[i] != '\0'; i++) {
        s3[i] = s1[i];
    }
    for (j = 0; s2[j] != '\0'; j++) {
        s3[i + j] = s2[j];
    }
    s3[i + j] = '\0';
    printf("\nCombined: %s", s3);

    i = 0;
    while (s1[i] != '\0' || s2[i] != '\0') {
        if (s1[i] != s2[i]) {
            equal = 0;
            break;
        }
        i++;
    }

    if (equal == 1) {
        printf("\nEqual\n");
    } else {
        printf("\nNot Equal\n");
    }

    return 0;
}