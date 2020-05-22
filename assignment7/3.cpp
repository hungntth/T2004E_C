#include <stdio.h>
int main(){
	int a[4][3];
	for(int i=0; i<4;i++){
		for(int j=0;j<3;j++){
			printf("a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	int b[3][4];
	for(int i=0; i<3;i++){
		for(int j=0;j<4;j++){
		b[i][j]=a[j][i];
	}
}printf("Ma tran a sau khi chuyen vi: \n");
for(int i=0; i<3;i++){
		for(int j=0;j<4;j++){
			printf("a[%d][%d] : %d \n",i,j,b[i][j]);
}
}
}
