#include<stdio.h>
void main(){
	int x;
	printf("Enter the digit :\n");
	scanf("%d",&x);

	int arr[20];
	int count=0;
	for(int i=1;i<50;i++){
		while(x>0){
			int a=x%10;
		
			x=x/10;
			arr[count]=a;
			
			printf("%d  ",arr[count]);
			count++;

		}
	}
	for(int i=0;i<1000;i++){
		int a=arr[count+1];
		if(a<arr[count]){
			int temp=arr[count]

	}
}
