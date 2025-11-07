#include<stdio.h>

int main()
{
	int a;
	int i=1;
	scanf("%d",&a);
	for(i;a>1;i++){
		a=a/2;
	}
	printf("%d\n",i);
    return 0;
}
