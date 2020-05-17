#include <stdio.h>
int main(){
	int ary[5];
	for(int i=0;i<5;i++){
		printf("nhap so ");
		scanf("%d",&ary[i]);
	} int chanmin=ary[0];

	for(int i=0;i<5;i++){
		if(ary[i]%2==0){
			chanmin=ary[i];
			for(int j=0;j<5;j++){
				if(chanmin>ary[j]&&ary[j]%2==0){
					chanmin=ary[j];
				}
			}
		}
		}printf("%d",chanmin);
	}

