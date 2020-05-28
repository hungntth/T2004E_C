#include <stdio.h>
#include <string.h>
int main(){
	char s1[50];
	char s2[50];
	printf("Nhap S1 : ");
	scanf("%s",s1);
	printf("Nhap S2 : ");
	scanf("%s",s2);
	if(strlen(s2) >= strlen(s1)){
		printf("S1 khong chua S2");
		
	}else{
		char *test;
		test = strstr(s1, s2);
		if(test == NULL){
			printf("S1 khong chua S2");
		}else{
			printf("S1 chua S2");
		}
	}
}
