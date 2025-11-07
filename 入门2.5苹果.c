#include<stdio.h>

int main()
{
	int a;
	scanf("%d",&a);
	if(a==0) printf("Today, I ate 0 apple.\n");
	else if(a==1) printf("Today, I ate 1 apple.\n");
	else printf("Today, I ate %d apples.",a);
    return 0;
}
