#include <stdio.h>
#include <string.h>
<<<<<<< HEAD

int main(){
	char s[20];
	int a=0,e=0,i=0,o=0,u=0;
	printf("Enter string: ");
	scanf("%s",s);
	for(int j=0;j<20;j++){
		if(s[j]=='a'){
			a++;
		}
}
	for(int j=0;j<20;j++){
		if(s[j]=='e'){
			e++;
		}		

	}
	for(int j=0;j<20;j++){
		if(s[j]=='i'){
			i++;
		}		

	}
	for(int j=0;j<20;j++){
		if(s[j]=='o'){
			o++;
		}		

	}
	for(int j=0;j<20;j++){
		if(s[j]=='u'){
			u++;
		}		

	}
	int l=strlen(s);
	int x=l-a-e-i-o-u;
	printf("Number of characters: \n a: %d; e: %d; i: %d; o: %d; u: %d; rest: %d",a,e,i,o,u,x);
//	int a1=
	printf("Percentages of total: \n a: %f%%; e: %d%%; i: %d%%; o: %d%%; u: %d%%; rest: %d%%",((float)a/l)*100,((float)e/l)*100,((float)i/l)*100,((float)o/l)*100,((float)u/l)*100,((float)x/l)*100);
}

=======
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
>>>>>>> 0d263103c0233ffb0974a0d0a2a74aa9c2664a96
