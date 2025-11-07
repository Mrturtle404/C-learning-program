#include<stdio.h>
int jiecheng(int a){
	for(a;a>0;a--){
		a*=a;
	}
	return a;
}
int main()
{
	int n;
	scanf("%d",&n);
	long long sum=0;
	int i=1;
	int j=0;
	for(i;i<n+1;i++){
		sum+=jiecheng(i);
	}
	printf("%d\n",sum);
    return 0;
}
