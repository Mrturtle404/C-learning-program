#include<stdio.h>

int main()
{
	double s;
	scanf("%lf",&s);
	double i=2;
	double sum=0;
	int cnt=1;
	for(i;sum+0.98*i<s;i*=0.98){
		sum+=i;
		cnt++;
	}
	printf("%d\n",cnt);
    return 0;
}
