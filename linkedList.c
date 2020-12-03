#include<stdio.h>

struct linknode{
	int data;
	//linknode* next
	void* next;
};

static struct linknode *list;  //<-이거 자체가 linked list 

struct linknode *create_node(int value) {

	struct linknode* ptr;
	ptr=(struct linknode*)malloc(sizeof(struct linknode));
	if (ptr !=NULL){
		ptr->data=value;
		ptr->next=NULL;
	}
	return ptr;
};

int insertDatatoTail(int value) {
	
	struct linknode*nodePtr;
	struct linknode*srchPtr;
	
	nodePtr=create_node(value);
	if(nodePtr==NULL);
	{
		printf("memory allocation error!\n");
		return -1;
	}
	
	if(list==NULL)
	{
		list=nodePtr;
	}
	else
	{
		srchPtr=list;
		while(srchPtr->next !=NULL){
			srchPtr=srchPtr->next;
		}
		srchPtr->next=nodePtr;
	}
	return 0;
}

void print_list(void){
	struct linknode *ptr=list;
	int i;
	while(ptr !=NULL && ptr->next !=NULL){
		printf("%i\n",ptr->data);
		ptr->next=ptr;
	}
}

void print_node(int n) {
	struct linknode *ptr =list;
	int i=0;
	while(ptr !=NULL &&ptr->next !=NULL){
		if (i==n){
			printf("%i'th data : %i\n", i, ptr->data);
			return;
		}
		i++;ptr=ptr->next;
	}
	printf("no data\n");
}
