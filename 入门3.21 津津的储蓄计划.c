#include<stdio.h>

int main()
{
	int a[12];
	for(int i=0;i<12;i++){
		scanf("%d",&a[i]);
	}
	int shengyu=0;
	int cunru;
	int sum=0;
	for(int i=0;i<12;i++){
		if(300+shengyu<a[i]){
			printf("%d\n",-i-1);
			return 0;
		}else{
			shengyu=300+shengyu-a[i];
			cunru=shengyu/100*100;
			sum+=cunru;
			shengyu=shengyu-cunru;
		}
	}
	printf("%.0f\n",1.2*sum+shengyu);
    return 0;
}
