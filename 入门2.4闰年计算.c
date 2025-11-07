#include<stdio.h>

int main()
{
	int n,b,c,d,e;
	scanf("%d",&n);
	b=n%4;
	c=n%100;
	d=n%400;
	if(b==0&&c>0||d==0) e=1;
	else e=0;
	printf("%d\n",e);
    return 0;
}
