#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node*next;
	
};
int main()
{
	struct Node*head;
	struct Node*second;
	struct Node*third;
	// Allocated in the Heap
	head=(struct Node*)malloc(sizeof(struct Node));
	second=(struct Node*)malloc(sizeof(struct Node));
	third=(struct Node*)malloc(sizeof(struct Node));
	// Linking First and Second nodes
	head->data=7;
	head->next= second;
	// Linking second and third
	second->data=11;
	second->next= third;
	// Terminating the list Pointing NULL
	third->data=55;
	third->next= NULL;
	
	return 0;
}
