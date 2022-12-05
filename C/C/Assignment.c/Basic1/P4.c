#include <stdio.h>
void main(){
	int x;
	printf("Enter no, : \n");
	scanf("%d",&x);
        printf("The Even no. between 0 to %d are : \n",x);

	for(int i=1;i<=x;i++){
		if(i%2==0){
			printf("%d\n",i);
		}
	}
}
