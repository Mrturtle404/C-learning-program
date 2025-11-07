#include<stdio.h>
#include<math.h>
int main()
{
	int N;
	scanf("%d",&N);
	if(N==0){
		printf("0");
		return 0;
	}
	int sum=0;
	int i=1;
	int cnt=0;
	int n=N;
	for(n;n!=0;n/=10,cnt++);
	for(N;N!=0;N/=10,cnt--){
		sum+=pow(10,cnt-1)*(N%10);
	}
	printf("%d\n",sum);
    return 0;
}
