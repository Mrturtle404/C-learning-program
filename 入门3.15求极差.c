#include<stdio.h>

int main()
{
	int max,min,num;
	int n;
	scanf("%d",&n);
	if(n==1){
		scanf("%d",&num);
		printf("0\n");
		return 0;
	}
	scanf("%d %d",&max,&min);
	if(max<=min){
		num=max;
		max=min;
		min=num;
	}
	for(n;n>2;n--){
		scanf("%d",&num);
		getchar();
		if(num>max) max=num;
		if(num<min) min=num;
	}
	printf("%d\n",max-min);
    return 0;
}
