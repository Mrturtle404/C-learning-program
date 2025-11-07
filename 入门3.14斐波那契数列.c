#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	double a0=0;
	double a1=1;
	if(n==0){
		printf("0.00\n");
		return 0;
	}
	if(n==1){
		printf("1.00\n");
		return 0;
	}
	int cnt=2;
	for(a0,a1;cnt<=n;cnt+=2){
		a0=a0+a1;
		a1=a0+a1;
	}
	if(n%2==0) printf("%.2f\n",a0);
	if(n%2==1) printf("%.2f\n",a1);
    return 0;
}
