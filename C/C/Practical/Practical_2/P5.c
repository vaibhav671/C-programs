#include <stdio.h>
void main (){
	int x,y;
	printf("Enter the range :\n");
	scanf("%d",&x);

	scanf("%d",&y);
	printf("The odds are : \n");
	for(int i=x;i<=y;i++){
		if(i%2!=0){
			printf("%d\n",i);
		}
	}

	printf("The even are : \n");
	for(int i=y;i>=x;i--){
		if(i%2==0){
			printf("%d\n",i);
		}
	}
}
	
