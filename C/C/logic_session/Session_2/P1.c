// WAP to get even nos. cube and odd nos. as it is betn given rang 

#include <stdio.h>
void main(){
	int x,y;
	printf("Enter the starting and ending value :\n");
	scanf("%d\n%d",&x,&y);

	for(int i=x;i<=y;i++){
		if(i%2==0){
			printf("%d  ",i*i*i);
		}else{
			printf("%d  ",i);
		}
	}
}
