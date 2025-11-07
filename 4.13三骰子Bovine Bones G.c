#include<stdio.h>
	
int main(){
	int x,y,z;
	scanf("%d %d %d",&x,&y,&z);
	//3-x+y+z
	int a[x+y+z-2];
	for(int i=0;i<x+y+z-2;i++){
		a[i]=0;
	}
	int sum;
	for(int i=1;i<x+1;i++){
		for(int j=1;j<y+1;j++){
			for(int k=1;k<z+1;k++){
				sum=0;
				sum=i+j+k;
				a[sum-3]++;
			}
		}
	}
	int max=a[0];
	int t;
	for(int i=1;i<x+y+z-2;i++){
		if(a[i]>max){
			max=a[i];
			t=i+3;
		}
	}
	printf("%d",t);
	return 0;
}
