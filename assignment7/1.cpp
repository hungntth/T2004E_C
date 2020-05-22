#include <stdio.h>
int main(){
	int a[4][4];
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			printf("Nhap so a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	int sum1=0;
	int sum2=0;
		for(int i=0;i<4;i++){
			for(int j=0;j<4;j++){
				if(i==j){
					sum1 +=a[i][j];
					
				}
				if((i+j)==3){
						sum2 +=a[i][j];
					}			
}
}
	float b = sum1/4;
		float c = sum2/4;
	printf("TB duong cheo 1 = %f \n TB duong cheo 2 = %f ",b,c);
//printf("TB duong cheo 1 = %d \n TB duong cheo 2 = %d ",sum1,sum2);
}
