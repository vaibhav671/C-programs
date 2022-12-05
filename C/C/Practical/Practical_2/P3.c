/* wap to print the divisior & count of divisors of the entered num input :15*/

#include <stdio.h>
void main (){
	int x,a=0,num=0;
	printf("Enter the range :\n");
	scanf("%d",&x);
	printf("The divisiors are : \n");
	
	for(int i=1;i<=x;i++){
		if(x%i==0){
			printf("%d\n",i);
			num=num+1;
			a=a+i;
		}
	}
	printf("The count is : %d\n",num);
	printf("The addition  is : %d\n",a);
}
