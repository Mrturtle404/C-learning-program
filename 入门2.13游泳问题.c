#include<stdio.h>

int main()
{
	int x,n,k;
	int week,day;
	scanf("%d %d",&x,&n);
	week=n/7;
	day=n%7;
	if(x+day<=5){
		k=1250*week+250*day;
	}else if(5<x+day&&x+day<=7&&x<=5){
		k=1250*week+(6-x)*250;
	}else if(5<x+day&&x+day<=7&&x>5){
		k=1250*week;
	}else if(7<x+day&&x<=5){
		k=1250*week+(6-x)*250+(x+day-7)*250;
	}else if(7<x+day&&x>5){
		k=1250*week+(x+day-7)*250;
	}
	printf("%d\n",k);
    return 0;
}
