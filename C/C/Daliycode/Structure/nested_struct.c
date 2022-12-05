#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct movieinfo{
	char actor[20];
	float imdb;
};
struct movie{
	char Mname[10];
	struct movieinfo obj1;
};

void main(){
	struct movie obj2={"Ra.one",{"Sharukh",7.2}};;
	
	printf("%s\n",obj2.Mname);
	printf("%s\n",obj2.obj1.actor);
	printf("%f\n",obj2.obj1.imdb);

}
