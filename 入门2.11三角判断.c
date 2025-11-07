#include<stdio.h>

int main()
{
	int a,b,c;
	int x,y,z;
	scanf("%d %d %d",&x,&y,&z);
	if(x>=y&&x>=z){
		a=x;
		b=y;
		c=z;
	}
	if(y>=x&&y>=z){
		a=y;
		b=x;
		c=z;
	}
	if(z>=y&&z>=x){
		a=z;
		b=y;
		c=x;
		}
	if(a>=b+c) {
	printf("Not triangle\n");
    }else {
	if(a*a==b*b+c*c) printf("Right triangle\n");
	if(a*a>b*b+c*c) printf("Obtuse triangle\n");
	if(a*a<b*b+c*c) printf("Acute triangle\n");
	if(b=c) printf("Isosceles triangle\n");
	if(a=b=c) printf("Equilateral triangle\n");
    }
    return 0;
}
