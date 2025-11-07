#include<stdio.h>
#include<math.h>
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

int main()
{
	int L;
	scanf("%d",&L);
	if(L==1){
		printf("0\n");
		return 0;
	}
	int sum=0;
	int i=2;
	int count=0;
	for(i;sum+i<=L;i++){
		if(isprime(i)){
			sum+=i;
			count++;
			printf("%d\n",i);
		}
	}
	printf("%d",count);
    return 0;
}
