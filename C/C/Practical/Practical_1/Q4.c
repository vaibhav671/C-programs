#include<stdio.h>
void main(){
	int x;
	printf("Enter no. of month :\n ");
	scanf("%d",&x);
	if(x==1){
		printf("The month of Jan has 31 days\n");
	}else if(x==2){
		 printf("The month of Feb has 30 days\n");
	}else if(x==3){
		 printf("The month of March has 31 days\n");
	}else if(x==4){
		 printf("The month of April has 30 days\n");
	}else if(x==5){
		 printf("The month of May has 31 days\n");
	}else if(x==6){
		 printf("The month of Jun has 30 days\n");
	}else if(x==7){
		 printf("The month of July has 31 days\n");
	}else if(x==8){
		 printf("The month of Aug has 31 days\n");
	}else if(x==9){
		 printf("The month of sep has 30 days\n");
	}else if(x==10){
		 printf("The month of  Oct has 31 days\n");
	}else if(x==11){
		 printf("The month of Nov has 30 days\n");
	}else if(x==12){
		 printf("The month of Dec has 31 days\n");
	}else{
		printf("Invalid month no. \n");
	}
}

