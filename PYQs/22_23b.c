#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i = 0, j = 0;

    // Input two strings
    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // Move to the end of the first string
    while (str1[i] != '\0') {
        i++;
    }

    // Append the second string to the first
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0'; // Null-terminate the new string

    printf("Concatenated String: %s\n", str1);

    return 0;
}
