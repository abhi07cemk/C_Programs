#include <stdio.h>
int main()
{
	char ch;
	printf("Enter Any Character : ");
	scanf("%c", &ch);
	if((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u') ||(ch == 'A') || (ch == 'E') || (ch == 'I') || (ch == 'O') || (ch == 'U'))
	{
		printf("\n Character is Vowel.");
	}
	else
	{
		printf("\n Character is Consonant.");
	}
	return 0;
}
