#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node*next;
	
};
// Function for Traversal
void Traversal(struct Node*ptr)
{
	while(ptr!=NULL){
	
	printf(" %d ", ptr->data);
	ptr= ptr-> next;
	}
}
// Inseretion at beginning
struct Node* insertAtFirst(struct Node * head, int data){
	struct Node * ptr = (struct Node * )malloc(sizeof(struct Node));
	ptr-> data =data;
	ptr -> next = head;
	return ptr;
}
// Insertion at between
struct Node* insertAtBetween(struct Node * head, int data, int index){
	struct Node * ptr = (struct Node * )malloc(sizeof(struct Node));
	struct Node* p =head;
	int i =0;
	while(i!= index-1)
	{
		p = p->next;
		i++;
		
	}
	ptr->data=data;
	ptr -> next= p->next;
	p->next= ptr;
	return head;
}
// Insertion at End
struct Node* insertAtEnd(struct Node * head, int data){
	struct Node * ptr = (struct Node * )malloc(sizeof(struct Node));
	ptr-> data = data;
	struct Node *p=head;
	while(p->next!= NULL){
		p= p-> next;
	}
	p -> next = ptr;
	ptr->next = NULL;
	return head;
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
	// Inserting element at the beginning
	head = insertAtFirst(head,69);
	// Insert at between
	head =insertAtBetween(head,1000,4);
	// Insert at End
	 insertAtEnd(head,333);
	// Calling the traversal function
	Traversal(head);
	return 0;
}
