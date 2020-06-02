#include <stdio.h>
#include <string.h>

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

