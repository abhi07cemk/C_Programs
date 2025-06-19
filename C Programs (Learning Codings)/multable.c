// #include<stdio.h>
// int main ()
// {
//     int n,i,x;
//     printf("Enter A Number : ");
//     scanf("%d", &n);

//     printf("Enter Range Upto Which You Want Multiplication Table : ");
//     scanf("%d",&x);

//     printf("Multiplication Table of %d is : ", n);
//     printf("\n");
//     for(i = 1; i<=x; i++)
//     {
//         printf("%d * %d = %d\n", n,i,n*i);
//     }
// return 0;
// }

#include<stdio.h>
int main ()
{
    int n1,n2,range;
    printf("Enter Starting number : ");
    scanf("%d", &n1);
    printf("Enter Ending number : ");
    scanf("%d", &n2);

    printf("Enter Range of Multiplication : ");
    scanf("%d", &range);

    for(int i = 1; i<=range; i++)
    {
        printf("%d x %d = %d\t", n1, i, n1*i);
        printf("%d x %d = %d\n", n2, i, n2*i);
    }
   // printf("\n");
return 0;
}