#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int i=1;
	int sum=0;
	for(i;i<=n;i++){
		sum+=i;
	}
	printf("%d",sum); 
    return 0;
}
