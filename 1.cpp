#include <stdio.h>
#include <string.h>

void concat(char s1[], char s2[]){
	strcat(s1," ");
	strcat(s1,s2);
}
int main(){
	char str1[20],str2[20];
	printf("Enter the first string: ");
	scanf("%s",str1);
	printf("Enter the secon string: ");
	scanf("%s",str2);
	concat(str1,str2);
	printf("The concatenated string: %s",str1);
	
	return 0;
}

