#include <stdio.h>
void main(){
	float salary;
	printf("Enter salary of Employee :");
	scanf("%f",&salary);
	
	if(salary>=0 && salary<=50000){
		printf("You are in 0%. slot ");
	}
	if(salary>50000 && salary<=100000 ){
		printf("You are in 10%. slot ");
	}
	if(salary>100000 && salary<=150000 ){
		printf("You are in 15%. slot ");
	}
	if (salary > 150000 ){			               
	       	printf("You are in 10%. slot ");
	}
}
	

