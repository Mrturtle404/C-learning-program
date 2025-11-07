#include<stdio.h>
//0-670-82162-4
int main()
{
	char isbn[13];
	scanf("%s",&isbn);
	int a[9];
	int t;
	a[0]=isbn[0]-'0';
	a[1]=isbn[2]-'0';
	a[2]=isbn[3]-'0';
	a[3]=isbn[4]-'0';
	a[4]=isbn[6]-'0';
	a[5]=isbn[7]-'0';
	a[6]=isbn[8]-'0';
	a[7]=isbn[9]-'0';
	a[8]=isbn[10]-'0';
	if (isbn[12]!='X') t=isbn[12]-'0';
	else t=10;
	int sum=0;
	int mod;
	int i=0;
	for(i;i<9;i++){
		sum+=a[i]*(i+1);
	}
	mod=sum%11;
	if(mod==t){
		printf("Right\n");
	}else if(mod!=t&&mod==10){
		printf("%d-%d%d%d-%d%d%d%d%d-X\n"
		,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8]);
	}else if(mod!=t&&mod<10){
		printf("%d-%d%d%d-%d%d%d%d%d-%d\n"
		,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],mod);
	}
	return 0;
}
