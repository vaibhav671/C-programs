#include<stdio.h>

struct demo{
	int x;
	float y;
};

void fun(struct demo *ptr){
	printf("%d\n",ptr->x);
	printf("%f\n",ptr->y);

}

void gun(struct demo Obj){
	printf("%d\n",Obj.x);
	printf("%f\n",Obj.y);

}

void main(){
	struct demo obj={10,11.125};
	printf("In Adress fun:\n");
	fun(&obj);
	printf("In without Adress gun:\n");
	gun(obj);

}
