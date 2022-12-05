#include <stdio.h>
void main(){
	char ch,ch1;
	int num=0;
	printf("Enter Two characters : \n");
	scanf("%c",&ch);
	scanf(" %c",&ch1);
	printf("Range of your characters is : \n ");
	for(char i=ch;i<=ch1;i++){
		num=num+1;
		if(i>='A'&& i<='Z'){
			if(num<=10){
				printf("%c\n",i);
			}
			
		}
		else if(i>='a' && i<='z'){
			if(num<=10){
				printf("%c\n",i);
			}
		}
	}
}
