#include<stdio.h>
#include<string.h>
typedef struct employee{
	int Id;
	char empname[20];
	float sal;
	struct employee *next;
}Emp;

void main(){
	Emp obj1,obj2,obj3;
	Emp *head=&obj1;

	obj1.Id=1;
	strcpy(obj1.empname,"Vaibhav");
	obj1.sal=9.64;
	obj1.next=&obj2;

	obj2.Id=2;
	strcpy(obj2.empname,"jadoo");
	obj2.sal=8.25;
	obj2.next=&obj3;

	obj3.Id=3;
	strcpy(obj3.empname,"om");
	obj3.sal=6.94;
	obj3.next=NULL;

	//Accessing all by ptr
	printf("%d\n",head->Id);
	printf("%s\n",head->empname);
	printf("%f\n\n",head->sal);

	
	printf("%d\n",head->next->Id);
	printf("%s\n",head->next->empname);
	printf("%f\n\n",head->next->sal);


	printf("%d\n",head->next->next->Id);
	printf("%s\n",head->next->next->empname);
	printf("%f\n\n",head->next->next->sal);
}
