#include<stdio.h>

int main()
{
	int e;
	double m;
	scanf("%d",&e);
	if(e<=150){
		m=e*0.4463;
	}else if(150<e&&e<=400){
		m=0.4463*150+0.4663*(e-150);
	}else if(e>400) {
		m=150*0.4463+250*0.4663+(e-400)*0.5663;
	}
	printf("%.1f\n",m);
    return 0;
}
