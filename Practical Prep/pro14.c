#include <stdio.h>
int main()
{
    int grade;
    printf("Enter result : ");
    scanf("%d", &grade);

    if(grade >= 90)
    {
        printf("Grade : O");
    }
    else if(grade >=80 && grade < 90)
    {
        printf("Grade : E");
    }
    else if(grade >=70 && grade < 80)
    {
        printf("Grade : A");
    }
    else if(grade >= 60 && grade < 70)
    {
        printf("Grade : B");
    }
    else if(grade >= 50 && grade < 60)
    {
        printf("Grade : C");
    }
    else if(grade >= 40 && grade < 50)
    {
        printf("Grade : D");
    }
    else if(grade < 40)
    {
        printf("Grade : F");
    }
    else
    {
        printf("Invalid");
    }

    return 0;
}