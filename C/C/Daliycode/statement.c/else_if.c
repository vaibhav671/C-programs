#include<stdio.h>
void main(){
	int score;
	printf("Enter cricket players score :\n");
	scanf("%d",&score);
	if(score==0){
		printf("The player has bad luck\n");
	}
	else if(score>0 && score<50){
		printf("The player played good \n");
	}
	else if(score==50){
		printf("The player has completed half century\n");
	}
	else if(score>50 && score<100){
		printf("The player has played nice \n ");
	}
	else if(score==100){
	        printf("The player has completed century\n ");
	}
	else{
		printf("The player has played  best and very nice\n");
	}
}
