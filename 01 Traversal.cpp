#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node*next;
	
};
void Traversal(struct Node*ptr)
{
	while(ptr!=NULL){
	
	printf(" %d ", ptr->data);
	ptr= ptr-> next;
	}
}
int main()
{
	struct Node*head;
	struct Node*second;
	struct Node*third;
	struct Node*fourth;
	struct Node*fifth;
	// Allocated in the Heap
	head=(struct Node*)malloc(sizeof(struct Node));
	second=(struct Node*)malloc(sizeof(struct Node));
	third=(struct Node*)malloc(sizeof(struct Node));
	fourth=(struct Node*)malloc(sizeof(struct Node));
	fifth=(struct Node*)malloc(sizeof(struct Node));
	// Linking First and Second nodes
	head->data=7;
	head->next= second;
	// Linking second and third nodes
	second->data=11;
	second->next= third;
	// Linking the third and fourth nodes
	third->data=55;
	third->next= fourth;
	// Linking the fourth and fifth nodes
	fourth->data=65;
	fourth->next= fifth;
	// Terminating the list Pointing NULL
	fifth->data=96;
	fifth->next= NULL;
	
	// Calling the traversal function
	Traversal(head);
	return 0;
}
