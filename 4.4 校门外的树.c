#include<stdio.h>

int main()
{
	int l,m;
	scanf("%d %d",&l,&m);
	int a[l+1];
	for(int i=0;i<l+1;i++){
		a[i]=1;
	}
	int left,right;
	for(m;m>0;m--){
		scanf("%d %d",&left,&right);
		for(int i=left;i<right+1;i++){
			a[i]=0;
		}
	}
	int sum=0;
	for(int i=0;i<l+1;i++){
		sum+=a[i];
	}
	printf("%d",sum);
    return 0;
}
