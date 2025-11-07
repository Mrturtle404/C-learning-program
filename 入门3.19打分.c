#include<stdio.h>
int max(int a,int b){
	if(a>b){
		return a;
	}else return b;
}
int min(int a,int b){
	if(a<b){
		return a;
	}else return b;
}
int main()
{
	int n;
	scanf("%d",&n);
	getchar();
	int maxg,ming;
	int grade;
	int sum=0;
	scanf("%d %d",&maxg,&ming);
	maxg=max(maxg,ming);
	ming=min(maxg,ming);
	sum+=maxg+ming;
	for(int i=0;i<n-2;i++){
		scanf("%d",&grade);
		sum=sum+grade;
		maxg=max(maxg,grade);
		ming=min(grade,ming);
	}
	sum=sum-maxg-ming;
	printf("%.2f\n",1.0*sum/(n-2));
    return 0;
}
