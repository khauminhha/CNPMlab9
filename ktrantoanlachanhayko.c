
#include<stdio.h>
int toanchan(int n)
{
            if(n==0)
            {
                        return 0;
            }
            else
            {
                        int chuso= n%10;
                        if(chuso %2 !=0)
                        {
                                    return 1;
                        }
                        return toanchan(n/10);
            }
}
int main()
{
            int n;
            printf("nhap vao mot so nguyen duong\n");
            scanf("%d", &n);
            if(toanchan(n)==1)
            {
                        printf("chu so khong phai la chu so toan chan\n");
            }
            else
            {
                        printf("mang la mang toan chan\n");
            }
}
