#include<stdio.h>
void swap(int *ptr,int *ptr1){
	int temp=*ptr;
	*ptr=*ptr1;
	*ptr1=temp;



}
void main(){
	int x,y;
	printf("Enter the two no.s :\n");
	scanf("%d\n%d",&x,&y);

	printf("After swap the value are :\n");
	swap(&x,&y);
	printf("\n%d\n%d",x,y);

}
