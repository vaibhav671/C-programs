#include <stdio.h>
void main(){
	char ch,ch1;
	int a=0;
	printf("Enter any two character :\n");
	scanf("%c",&ch);
	scanf(" %c",&ch1);
	for(char i=ch;i<=ch1;i++){
		if(ch==ch1 ){
			printf("Both characters are same \n");
		}else{
			a=ch1-ch;
		}
	}
	printf("The difference is : %d\n",a);
}
