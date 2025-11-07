#include<stdio.h>

int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	char c1,c2,c3;
	getchar();
	getchar();
	scanf("%c%c%c",&c1,&c2,&c3);
	c1=c1-66;
	c2=c2-66;
	c3=c3-66;
	int temp;
    if (a > b) { temp = a; a = b; b = temp; }
    if (a > c) { temp = a; a = c; c = temp; }
    if (b > c) { temp = b; b = c; c = temp; }
    switch(c1){
    	case -1:
    		printf("%d ",a);
    		break;
    	case 0:
    		printf("%d ",b);
    		break;
		case 1:
    		printf("%d ",c);
    		break;
    }
    switch(c2){
    	case -1:
    		printf("%d ",a);
    		break;
    	case 0:
    		printf("%d ",b);
    		break;
		case 1:
    		printf("%d ",c);
    		break;
    }
    switch(c3){
    	case -1:
    		printf("%d\n",a);
    		break;
    	case 0:
    		printf("%d\n",b);
    		break;
		case 1:
    		printf("%d\n",c);
    		break;
    }
    return 0;
}
