//WAP to check whether the i/p is lip year or not

#include <stdio.h>
void main(){
	int year;
	printf("Enter the year you want to check whether it is lip year or not :\n");
	scanf("%d",&year);
	if(year%4==0){
		printf("The year is lip year :\n ");
	}else{
		printf("The year is not a lip year :\n ");
	}
}
