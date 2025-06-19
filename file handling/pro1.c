#include <stdio.h>
int main()
{
    // FILE *pf = fopen("test.txt", "a");\

    // fprintf(pf, "\nSpongeBob SquarePants");

    // fclose(pf);

    if(remove("test.txt") == 0)
    {
        printf("The File Was Deleted Succesfully");
    }
    else
    {
        printf("The File Was not DELETED !");
    }
    return 0;
}