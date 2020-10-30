#include<stdio.h>
int check(int n)
{
	int c;
	while(n!=0)
	{
		c=n%10;
		n=n/10;
		if(c<n%10)
		return 0;
	}
	return 1;
}
int main()
{
	int n;
	printf("Nhap n:");
	scanf("%d",&n);
	if(check(n)==1)
	{
		printf("Chu so tang tu trai qua phai");
	}
	else
	{
		printf("Chu so ko tang tu trai sang phai");
	}
}
