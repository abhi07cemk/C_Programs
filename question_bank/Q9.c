#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i, count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Allows input with spaces

    for (i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);  // Convert each character to uppercase

        // Check for vowels (uppercase)
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            count++;
        }
    }

    printf("In Uppercase: %s", str);
    printf("Vowel count = %d\n", count);

    return 0;
}
