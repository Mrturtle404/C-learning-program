#include<stdio.h>

int main()
{
	int a[100]={0};
	scanf("%d",&a[0]);
	int i=1;
	for(i;a[i-1]!=0;i++){
		scanf("%d",&a[i]);
	}
	for(int j=i-2;j>-1;j--){
		printf("%d",a[j]);
		if(j>0) printf(" ");
	}
    return 0;
}
