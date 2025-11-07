#include<stdio.h>

int main()
{
/*	 1  2  3  4  5
	16 17 18 19  6
	15 24 25 20  7
	14 23 22 21  8
	13 12 11 10  9
*/
	int n;
	scanf("%d",&n);
	int matrix[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			matrix[i][j]=0;
		}
	}
	int num=1;
	int row=0;
	int col=0;
	int dir=0;
	//ср об вС ио 
	int dx[4]={0,1,0,-1};
	int dy[4]={1,0,-1,0};
	for(int i=0;i<n*n;i++){
		matrix[row][col]=num;
		int nrow=row+dx[dir];
		int ncol=col+dy[dir];
		if(nrow<0||nrow>n-1||ncol<0||ncol>n-1||matrix[nrow][ncol]!=0){
			dir=(dir+1)%4;
			nrow=row+dx[dir];
			ncol=col+dy[dir];
		}
		row=nrow;
		col=ncol;
		num++;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%3d",matrix[i][j]);
		}
		printf("\n");
	}
    return 0;
}
