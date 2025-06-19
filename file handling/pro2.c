#include <stdio.h>
int main()
{
    FILE *pF = fopen("C:\\Users\\ABHI\\Documents\\IBM Presentation.txt", "r");
    return 0;

    char buffer[255];

    while (fgets(buffer,255,pF) != NULL)
    {
        printf("%s", buffer);
    }
    fclose(pF);
}