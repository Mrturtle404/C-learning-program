#include<stdio.h>

int main()
{
	int N;
	scanf("%d",&N);
	int a[N][3];
	int sum[N];
	for(int i=0;i<N;i++){
		scanf("%d %d %d",&a[i][0],&a[i][1],&a[i][2]);
		sum[i]=a[i][0]+a[i][1]+a[i][2];
	}
	int cnt=0;
	for(int i=0;i<N;i++){
		for(int j=i+1;j<N;j++){
			if(a[i][0]-a[j][0]>=-5&&a[i][0]-a[j][0]<=5&&a[i][1]-a[j][1]>=-5&&a[i][1]-a[j][1]<=5&&a[i][2]-a[j][2]>=-5&&a[i][2]-a[j][2]<=5&&sum[i]-sum[j]>=-10&&sum[i]-sum[j]<=10)
			cnt++;
		}
	}
	printf("%d",cnt);
    return 0;
}
