#include<stdio.h>
void main(){
	int x,y,z;
	printf("Enter Three no.s : \n");
	scanf("%d",&x);
	scanf(" %d",&z);
	scanf(" %d",&z);
	if(x<y && x<z){
		printf("The min value amoung three is : %d\n",x);
	}else if(y<z && y<x){
		printf("The min value amoung three is : %d\n",y);
				        
	}else if(z<y && z<x){
		printf("The min value amoung three is : %d\n",z);
	}else if(x==y==z){
		printf("All of them are same \n");
	}else{
	        printf("Invalid input\n");
	}
}
