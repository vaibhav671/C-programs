// WAP to find max number amoung three no. 
#include<stdio.h>
int main (){
	int x,y,z;
	printf("Enter Three no. :\n");
	scanf("%d",&x);
	scanf("%d",&y);
	scanf("%d",&z);
	if(x>y && x>z){
		printf("The max no. is : %d\n",x);
	}else if(y>x && y>z){
		printf("The max no. is : %d\n",y);

	}else if(z>y && z>x){
		printf("The max no. is : %d\n",z);
	}else if(x==y==z){
		printf("All of them are same \n");
	}else{
		printf("Invalid input");
	}
}
