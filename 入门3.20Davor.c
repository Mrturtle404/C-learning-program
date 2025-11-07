#include<stdio.h>

int main()
{
	int N;
	scanf("%d",&N);
	//52*7x+52*21k
	int n=N/52/7;
	//n=x+3k
	int x,k;
	for(int i=100;i>0;i--){
		if((n-i)%3==0&&(n-i)/3>0){
			x=i;
			k=(n-i)/3;
			break;
		}
	}
	printf("%d\n%d",x,k);
    return 0;
}
