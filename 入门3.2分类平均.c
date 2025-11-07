#include<stdio.h>

int main()
{
	int n,k;
	//int i=1; 
	int sum1=0;
	int sum2=0;
	int j1=0;
	int j2=0;
	scanf("%d %d",&n,&k);
	for(int i=1;i<n+1;i++){
		if(i%k==0){
		sum1+=i;
		j1++;
		}
		else{
		sum2+=i;
		j2++;
		}
	}
	printf("%f %f\n",1.0*sum1/j1,1.0*sum2/j2);
    return 0;
}
