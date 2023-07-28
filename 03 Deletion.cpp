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
// Case 1 : Deleting the first element from Linked list
  	struct Node *deleteFirst(struct Node*head){
	 
	struct Node*ptr = head;
  	head = head-> next;
  	free(ptr);
  	return head;
  	 };
// Case 2 : Deleting element at an given Index
	struct Node *deleteFirst(struct Node*head, int index){
	struct Node*p=head;
	struct Node*q=head->next;
	for(int i=0; i<index-1;i++){
		p=p->next;
		q=q->next;
	}
	p->next = q->next;
	free(q);
	return head;
	};
// Case 3: Deleting the last Element
		struct Node *deleteAtLast(struct Node*head){
		struct Node*p=head;
	struct Node*q=head->next;
	while(q->next!=NULL){
		p=p->next;
		q=q->next;
		}
		p->next = NULL;
	free(q);
	return head;
	};
// Case 4 : Delete a Node with a key/Value(of data)
		struct Node *deleteValue(struct Node*head, int value){
	struct Node*p=head;
	struct Node*q=head->next;
	while(q->data!=value && q->next!=NULL){
		p=p->next;
		q=q->next;
	}
	if(q->data==value){
		p->next= q->next;
		free(q);
	}
	return head;
	};
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
	printf("Linked list brfore deletion :");
	Traversal(head);
	// For deleting first element in linked list
	head= deleteFirst(head);
	printf("\nLinked list after deletion :");
	// Deleting at an Given Index
     head=deleteFirst(head,2);
	// Deleting the Last Index
	 head=deleteAtLast(head);
	 // Deleting a key node
	 head= deleteValue(head,55);
	Traversal(head);
	return 0;
}
