#include <stdio.h>
int main(){
	int a[4][3],b[4][3];
	for(int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			printf("Nhap so a[%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			printf("Nhap so b[%d][%d] :",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	int c[4][3];
		for(int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			c[i][j] = a[i][j]-b[i][j];
}
}
	printf("Ma tran sau khi tru: \n");
	for(int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			printf("c[%d][%d] : %5d \n",i,j,c[i][j]);
		}

		}
	int d[4][3];
		for(int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			d[i][j] = a[i][j]+b[i][j];
}
}
	printf("Ma tran sau khi cong: \n");
	for(int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			printf("c[%d][%d] : %5d \n",i,j,d[i][j]);
		}
		}
}
