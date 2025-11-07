#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		int cnt=0;
		for(int j=0;j<i;j++){
			if(a[j]<a[i]){
				cnt++;
			}
		}
		printf("%d",cnt);
		if(i<n-1) printf(" ");
	}
    return 0;
}
