#include<stdio.h>
#include<math.h>
int main()
{
	int n=0;
	int p1,p2,p3,t1,t2,t3;
	scanf("%d\n%d %d\n%d %d\n%d %d",&n,&t1,&p1,&t2,&p2,&t3,&p3);
	int i1=ceil(1.0*n/t1);
	int i2=ceil(1.0*n/t2);
	int i3=ceil(1.0*n/t3);
	int minp=2100000000;
	if(i1*p1<minp) minp=i1*p1;
	if(i2*p2<minp) minp=i2*p2;
	if(i3*p3<minp) minp=i3*p3;
	printf("%d\n",minp);
    return 0;
}
