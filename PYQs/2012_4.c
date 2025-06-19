#include <stdio.h>

int main() {
    int i, j, start;

    for (i = 1; i <= 5; i++) 
    {
        if (i == 1)
        {
            start = 1;
        } else 
        {
            start = i - 1;
        }

        for (j = 0; j < i; j++) {
            printf("%d ", start + j);
        }
        printf("\n");
    }

    return 0;
}
