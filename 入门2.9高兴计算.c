#include<stdio.h>

int main()
{
	int a,b,sum;
	int day=1;
	int maxuh=0;
	int maxday=0;
	for (day;day<=7;day++){
		scanf("%d %d",&a,&b);
		sum=a+b;
		if (sum >8){
			if(sum>maxuh){
				maxuh=sum;
				maxday=day;
			}
		}
	}
	printf("%d\n",maxday);
    return 0;
}
