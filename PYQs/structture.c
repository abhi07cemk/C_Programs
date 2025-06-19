#include <stdio.h>
struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    
    struct Student s[3],temp;
    for(int i = 0; i<3; i++)
    {
        printf("Enter Roll, Name, Marks : ");
        scanf("%d %s %f", &s[i].roll,&s[i].name,&s[i].marks);
    }
    for(int i = 0; i<2; i++)
    {
        for(int j = i + 1; j<3; j++)
        {
            if(s[i].name>s[j].name)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    for(int i = 0; i<3; i++)
    {
        printf("\n Roll = %d \n Name = %s \n Marks = %.2f",s[i].roll,s[i].name,s[i].marks);
    }
    

    return 0;
}