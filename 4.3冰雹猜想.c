#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int i=0;
	int m=n;
	int x=n;
	for(i;n!=1;i++){
		if(n%2==0){
			n=n/2;
		}else n=n*3+1;
	}
	int j=i;
	int a[i];
	for(i;i>0;i--){
		if(m%2==0){
			m=m/2;
		}else m=m*3+1;
		a[i-1]=m;
	}
	for(i;i<j;i++){
		printf("%d ",a[i]);
	}
	printf("%d",x);
    return 0;
}
