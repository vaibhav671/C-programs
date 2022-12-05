//wap to find the length of string given as i/p

#include<stdio.h>
#include<string.h>
int mystrln(char *str){
	int count=0;
	while(*str !='\0'){
		count++;
		str++;
		
	}
	return count;
}
void main(){
	char str[100];
	printf("Enter the string :\n");

	fgets(str);

	printf("%d\n",mystrln(str));
	int len=strlen(str);
	printf("%d\n",len);
}
