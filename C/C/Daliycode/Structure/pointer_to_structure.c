#include<stdio.h>
#include<stdlib.h>

struct movie{
	char Mname[20];
	int count;
	float price;
}obj={"Boyz2",8,250};

void main(){
	struct movie *ptr=&obj;
	printf("%s\n%d\n%f\n",obj.Mname,obj.count,obj.price);
	printf("With ptr:\n");
	printf("%s\n%d\n%f\n",ptr->Mname,ptr->count,ptr->price);
}
