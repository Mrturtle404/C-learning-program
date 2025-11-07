#include<stdio.h>

int main()
{
	int a,b,c,d,e,f,g,h;
	scanf("%d",&a);
	b=1-a%2;//b=0Å¼Êý 1ÆæÊý 
	if(a>4&&a<=12) c=1;
	else c=0;
	d=b+c;
	switch (d){
		case 0:
			e=f=g=0;
			h=1;
			break;
		case 1:
			e=h=0;
			f=g=1;
			break;
		case 2:
			e=f=1;
			g=h=0;
			break;
	}
	printf("%d %d %d %d\n",e,f,g,h);
    return 0;
}
