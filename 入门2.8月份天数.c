#include<stdio.h>

int main()
{
	int y,m,d;
	double a,b,c;
	scanf("%D %D",&y,&m);
	a=y%4;
	b=y%100;
	c=y%400;
	if(a==0&&b!=0||c==0) d=1;
	else d=0;
	if(d==1){
		switch(m){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("31\n");
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("30\n");
			break;
		case 2:
			printf("29");
			
		}
	}else
		switch(m){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("31\n");
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("30\n");
			break;
		case 2:
			printf("28");
			
		}
    return 0;
}
