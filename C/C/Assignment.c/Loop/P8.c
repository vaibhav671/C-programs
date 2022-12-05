#include <stdio.h>
void main (){
	char ch,ch1;
	printf("Enter two characters :\n");
	scanf("%c\n%c",&ch,&ch1);
	
	if(ch>='A'&& ch1<='Z'){
		if(ch==ch1){
			printf("Both the charaters are same \n");
		}else{
			printf("The diffrence between %c and %c is %d\n",ch,ch1,ch1-ch);
		}
	}else if(ch>='a'&& ch1<='z'){
		if(ch==ch1){
			printf("Both the charaters are same \n");
		}else{
			printf("The diffrence between %c and %c is %d\n",ch,ch1,ch1-ch);
		}
	}

}
