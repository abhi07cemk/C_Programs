#include<stdio.h>
#include<string.h>
int main ()
{
    char s1[] = "rishi";
    char s2[] = "abhi";

    //puts(strcat(s1,s2));
    printf("The length of s1 is : %d\n", strlen(s1));
    printf("The Reversed String is : ");
    puts(strrev(s1));
    
return 0;
}