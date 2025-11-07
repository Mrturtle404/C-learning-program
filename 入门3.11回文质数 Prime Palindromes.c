#include<stdio.h>
#include<math.h>
int isprime(int a); 
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	if(a<=5&&b>=5) printf("5\n");
	if(a<=7&&b>=7) printf("7\n");
	if(a<=11&&b>=11) printf("11\n");
	int d1=1;
	int d2=0;
	int d3=0;
	int d4=0;
	int num;
	for(d1;d1<10;d1+=2){
		for(d2;d2<10;d2++){
			num=101*d1+10*d2;
			if(num>=a&&num<=b&&isprime(num)) printf("%d\n",num);
		}
		d2=0;
	}
	d1=1;
	for(d1;d1<10;d1+=2){
		for(d2;d2<10;d2++){
			for(d3;d3<10;d3++){
				num=10001*d1+1010*d2+100*d3;
				if(num>=a&&num<=b&&isprime(num)) printf("%d\n",num);
			}
			d3=0;
		}
		d2=0;
	}
	d1=1;
	for(d1;d1<10;d1+=2){
		for(d2;d2<10;d2++){
			for(d3;d3<10;d3++){
				for(d4;d4<10;d4++){
					num=1000001*d1+100010*d2+10100*d3+1000*d4;
					if(num>=a&&num<=b&&isprime(num)) printf("%d\n",num);
				}
				d4=0;
			}
			d3=0;
		}
		d2=0;
	}
	d1=1;
    return 0;
}

//判断是否为质数 
int isprime(int a){
	int i=2;
	double b;
	b=a;
	double n;
	n=sqrt(b);
	for(i;i<=n;i++){
		if(a%i==0){
			return 0;
		}
	}
	return 1;
}
