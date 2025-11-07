#include<stdio.h>

int main()
{
	int w,x,h,q,p;
	scanf("%d %d %d",&w,&x,&h);
	scanf("%d",&q);
	p=q;
	int a[w][x][h];
	for(int i=0;i<w;i++){
		for(int j=0;j<x;j++){
			for(int k=0;k<h;k++){
				a[i][j][k]=1;
			}
		}
	}
	int x1,y1,z1,x2,y2,z2;
	for(p;p>0;p--){
		scanf("%d %d %d %d %d %d",&x1,&y1,&z1,&x2,&y2,&z2);
		for(int i=0;i<w;i++){
			for(int j=0;j<x;j++){
				for(int k=0;k<h;k++){
					if(x1<=i+1&&x2>=i+1&&y1<=j+1&&y2>=j+1&&z1<=k+1&&z2>=k+1){
						a[i][j][k]=0;
					}
				}
			}
		}
	}
	int cnt=0;
	for(int i=0;i<w;i++){
		for(int j=0;j<x;j++){
			for(int k=0;k<h;k++){
				cnt+=a[i][j][k];
			}
		}
	}
	printf("%d",cnt);
    return 0;
}
