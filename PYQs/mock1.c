#include <stdio.h>
int main() {
 int a = 5;
 int *p = &a;
 *p = *p * *p;
 printf("%d\n", a);
 return 0;
} 