#include<stdio.h>
struct Student
{
    int id;
    int marks;
    float average;
};
int main ()
{
    struct Student ravi, rishi, subh;

    rishi.id = 1;
    ravi.id = 2;
    subh.id = 3;
    ravi.marks = 45;
    rishi.marks = 44;
    subh.marks = 41;
    ravi.average = 21.4;
    rishi.average = 21.2;
    subh.average =  19.0;

    printf("Rishi got %d marks ", rishi.marks);

    

return 0;
}