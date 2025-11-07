#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	getchar();
	char str[n+1];
	int a[n];
	for(int i=0;i<n;i++){
		str[i]=getchar();
	}
	str[n]='\0';
	for(int i=0;i<n;i++){
		a[i]=str[i]-'0';
	}
	char b[10][5][4]={
		{"XXX", "X.X", "X.X", "X.X", "XXX"},
        {"..X", "..X", "..X", "..X", "..X"},
        {"XXX", "..X", "XXX", "X..", "XXX"},
        {"XXX", "..X", "XXX", "..X", "XXX"},
        {"X.X", "X.X", "XXX", "..X", "..X"},
        {"XXX", "X..", "XXX", "..X", "XXX"},
        {"XXX", "X..", "XXX", "X.X", "XXX"},
        {"XXX", "..X", "..X", "..X", "..X"},
        {"XXX", "X.X", "XXX", "X.X", "XXX"},
        {"XXX", "X.X", "XXX", "..X", "XXX"},
	};
	for(int j=0;j<5;j++){
		for(int i=0;i<n;i++){
			printf("%s",b[a[i]][j]);
			if(i<n-1) printf(".");
			else printf("\n");
		}
	}
    return 0;
}
