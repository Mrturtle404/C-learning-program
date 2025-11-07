#include<stdio.h>
	
int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	if(n==0||m==0){
		printf("0");
		return 0;
	}
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int b[n-m+1];
	for(int i=0;i<n-m+1;i++){
		b[i]=0;
	}
	for(int i=0;i<n-m+1;i++){
		for(int j=0;j<m;j++){
			b[i]+=a[i+j];
		}
	}
	int min=b[0];
	for(int i=1;i<n-m+1;i++){
		if(b[i]<min) min=b[i];
	}
	printf("%d",min);
	return 0;
}
