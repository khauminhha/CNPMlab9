#include<stdio.h>
int main()
{
	int s=0;
	int n;
	printf("Nhap mot so:");
	scanf("%d",&n);
	while(n>0)
	{
		n=n/10;
		s=s+1;
	}
	
	printf("So luong la:%d\n",s);
	return s;
}
