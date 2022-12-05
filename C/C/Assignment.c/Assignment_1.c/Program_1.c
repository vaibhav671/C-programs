#include<stdio.h>
void main(){
	int num;
	float rs;
	char chr;
	double  crMoney;
	printf("Enter any int value : ");
	scanf("%d",&num);
	printf("Enter float value :\n ");
	scanf(" %f",&rs);
	printf("Enter char value :\n");
	scanf(" %c",&chr);
	printf("Enter double Float value :\n ");
	scanf("%lf",&crMoney);

	printf("The size of num is :%ld\n",sizeof(num));
	printf("The size of rs is :%ld\n",sizeof(rs));
	printf("The size of char is :%ld\n",sizeof(chr));
	printf("The size of double is :%ld\n",sizeof(crMoney));
}
