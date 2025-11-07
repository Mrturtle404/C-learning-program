#include<stdio.h>

int main()
{
	int gcd(int a,int b){
		while(b!=0){
			int t=b;
			b=a%b;
			a=t;
		}
		return a;
	}
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
	int s;
	if(b<c) s=b;
	else s=c;
	printf("%d/%d\n",s/gcd(a,s),a/gcd(a,s));
    return 0;
}
