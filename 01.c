#include <stdio.h>
int dayudengyu(int a,int b)
{
	if(a>=b)
		return 0;
	else
		return 1;
}
int main()
{
	int a=2,b=1;
	if(dayudengyu(a,b))
		printf("0为真");
	else 
		printf("0为假");
}