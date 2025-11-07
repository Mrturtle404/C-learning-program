#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int m=n;
	for(int i=1;i<n*n+1;i++){
		printf("%02d",i);
		if(i%n==0) printf("\n");
	}
	printf("\n");
	int cnt=1;
	n=m;
	for(int i=1;i<n+1;m--,i++){
		for(int j=m;j>1;j--){
			printf("  ");
		}
		for(int k=0;k<i;k++,cnt++){
			printf("%02d",cnt);
		}
		printf("\n");
	}
    return 0;
}
