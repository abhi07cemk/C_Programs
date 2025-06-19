#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n1,n2,res,option;
    printf("Enter 1st Number : ");
    scanf("%d", &n1);
    printf("Enter 2nd Number : ");
    scanf("%d", &n2);
    do
    {
        printf("\n 1. ADD");
        printf("\n 2. SUB");
        printf("\n 3. MUL");
        printf("\n 4. DIV");
        printf("\n 5. EXIT");

        printf("\n Enter Your Option : ");
        scanf("%d" , &option);

        switch (option)
        {
            case 1:
                    printf("Additon : %d ", res =  n1 + n2);
                    break;
            case 2:
                    printf("Subtraction : %d ", res =  n1 - n2);
                    break;
            case 3:
                    printf("Multiplication : %d ", res =  n1 * n2);
                    break;
            case 4:
                    printf("Division : %d ", res =  n1 / n2);
                    break;
            case 5:
                exit(0);

        }


    }
    while (option != 6);
    
   return 0;
}