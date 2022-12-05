#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Movie{
	int count;
	char Mname[20];
	float imdb;
	struct Movie *next;

}mov;

void Access(mov *Obj){
	printf("%d\n",Obj->count);
	printf("%s\n",Obj->Mname);
	printf("%f\n\n",Obj->imdb);
	
}

void main(){
	mov *movie1=(mov*)malloc(sizeof(mov));
	mov *movie2=(mov*)malloc(sizeof(mov));
	mov *movie3=(mov*)malloc(sizeof(mov));

	movie1->count=8;
	strcpy(movie1->Mname,"Boyz3");
	movie1->imdb=8.7;
	movie1->next=movie2;

	movie2->count=3;
	strcpy(movie2->Mname,"Tiger");
	movie2->imdb=4.6;
	movie2->next=movie3;
	
	movie3->count=12;
	strcpy(movie3->Mname,"Tumbad");
	movie3->imdb=9.4;
	movie3->next=NULL;

	Access(movie1);
	Access(movie2);
	Access(movie3);
}
