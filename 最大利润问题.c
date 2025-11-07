#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	getchar();
	if(n==1){
		printf("0\n");
		return 0;
	}
	int price=0;
	int minprice=0;
	int maxdeltaprice=0;
	scanf("%d",&minprice);
	for(n;n>1;n--){
		scanf("%d",&price);
		if(price<minprice){
			minprice=price;
		}
		if(price-minprice>maxdeltaprice){
			maxdeltaprice=price-minprice;
		}
	}
	printf("%d\n",maxdeltaprice);
    return 0;
}
