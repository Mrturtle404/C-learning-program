#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int light[1000000];
	for(int i=0;i<1000000;i++){
		light[i]=1;
	}
	double a[n];
	int t[n];
	int x;
	for(int i=0;i<n;i++){
		scanf("%lf %d",&a[i],&t[i]);
		for(int j=1;j<t[i]+1;j++){
			x=a[i]*j;
			light[x-1]*=-1;
		}
	}
	for(int i=0;i<1000000;i++){
		if(light[i]==-1){
			printf("%d",i+1);
			break;
		}
	}
    return 0;
}
