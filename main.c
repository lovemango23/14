#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]) {
	
	int n[5];
	
	printf("input 5 integers :");
	scanf("%d %d %d %d %d",n,n+1,n+2,n+4,n+4);
	
	insertDatatoTail(n[0]);
	insertDatatoTail(n[1]);
	insertDatatoTail(n[2]);
	insertDatatoTail(n[3]);
	insertDatatoTail(n[4]);

	print_list();
	print_node(2);	
	
	return 0;
}
