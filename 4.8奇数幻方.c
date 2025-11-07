#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			a[i][j]=0;
		}
	}
	a[0][(n-1)/2]=1;
	int x=0;
	//k作为下一个填补的数字 
	for(int k=2;k<n*n+1;k++){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(a[i][j]==k-1){
					x=1;
					if(i==0&&j!=n-1){
						a[n-1][j+1]=k;
					}else if(i!=0&&j==n-1){
						a[i-1][0]=k;
					}else if(i==0&&j==n-1){
						a[i+1][j+1]=k;
					}else if(i!=0&&j!=n-1){
						if(a[i-1][j+1]==0) a[i-1][j+1]=k;
						else a[i+1][j]=k;
					}
				}
				if(x) break;
			}
			if(x) break;
		}
		x=0;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d",a[i][j]);
			if(j<n-1) printf(" ");
			else printf("\n");
		}
	}
    return 0;
}
