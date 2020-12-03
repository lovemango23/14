#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct Book{
		int number;
		char title[10];
	};
	
int main(int argc, char *argv[]) {
	struct Book *p;
	p= (struct Book*)malloc(2*sizeof(struct Book));
	
	if(p==NULL){
		printf("메모리할당오류!\n");
		return; 
	}
	
	p->number=1;
	strcpy(p->title,"C Programming");
	
	(p+1)->number=2;
	strcpy(p->title,"Electronics");	
	

	free(p);
	
	return 0;
}
