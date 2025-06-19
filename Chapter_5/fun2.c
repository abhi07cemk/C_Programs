#include <stdio.h>

void good_morning();
void good_afternoon();
void good_night();

void good_morning()
{
	printf("Good Morning :)");
}
void good_afternoon()
{
	printf("Good Afternoon");
}
void good_night()
{
	printf("Good Night");
}
int main()
{
	void good_morning();
	void good_afternoon();
	void good_night();
	return 0;
}

