#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	getchar();
	if(n==1){
		printf("1\n");
		return 0;
	}
	int left,right;
	int cnt1,cnt2;
	left=-1;
	cnt1=1;
	cnt2=1;
	for(n;n>0;n--){
		scanf("%d",&right);
		if(right-left==1){
			cnt2++;
		}
		if(right-left!=1){
			if(cnt2>cnt1){
				cnt1=cnt2;
				cnt2=1;
			}
		}
		if(n==1){
			if(cnt2>cnt1){
				cnt1=cnt2;
				cnt2=1;
			}
		}
		left=right;
	}
	printf("%d\n",cnt1);
    return 0;
}
