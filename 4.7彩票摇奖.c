#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int a[n+1][7];
	int b[n];
	for(int i=0;i<n+1;i++){
		if(i<n){
			b[i]=0;
		}
		for(int j=0;j<7;j++){
			scanf("%d",&a[i][j]);
		}
	}for(int i=1;i<n+1;i++){
		for(int j=0;j<7;j++){
			for(int k=0;k<7;k++){
				if(a[i][j]==a[0][k]) b[i-1]++;
			}
		}
	}
	int c[7]={0};
	for(int i=0;i<n;i++){
		switch (b[i]){
			case 1:
				c[0]++;
				break;
			case 2:
				c[1]++;
				break;
			case 3:
				c[2]++;
				break;
			case 4:
				c[3]++;
				break;
			case 5:
				c[4]++;
				break;
			case 6:
				c[5]++;
				break;
			case 7:
				c[6]++;
				break;
		}
	}
	for(int i=0;i<7;i++){
		printf("%d",c[6-i]);
		if(i<6) printf(" ");
	}
    return 0;
}
