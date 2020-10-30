#include<stdio.h>
int main()
{
	int s=0,n,tmp;
	printf("Nhap n:");
	scanf("%d",&n);
	while(n!=0)
	{
		tmp=n%10;
		s=s*10+tmp;
		n=n/10;
	}
	printf("So dao la:%d\n",s);
}

	

