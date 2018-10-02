#include<stdio.h>
struct st
{
	char name[3];
	int year;
	int num;
};
void main()
{
	st s1={"xu",12,42};
	printf("%s,%ld,%ld\n",s1.name,s1.num,s1.year);
}
