#include <stdio.h>
int main(){
	int ary[5];
	for(int i=0;i<5;i++){
		printf("nhap so ");
		scanf("%d",&ary[i]);
	} int lemax=ary[0];

	for(int i=0;i<5;i++){
		if(ary[i]%2==1){
			lemax=ary[i];
			for(int j=0;j<5;j++){
				if(lemax<ary[j]&&ary[j]%2==1){
					lemax=ary[j];
				}
			}
		}
		}printf("%d",lemax);
	}

