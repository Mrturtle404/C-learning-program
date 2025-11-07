#include<stdio.h>

int main()
{
	int n,a;
	int b=10000;
	scanf("%d",&n);
	for(n;n>0;n--){
		scanf("%d",&a); 
		if(a<b) b=a;
	}
	printf("%d",b);
    return 0;
}
