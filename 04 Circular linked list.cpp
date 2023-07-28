#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node*next;
	
};
// Traversal 
void Traversal(struct Node*head)
{
	struct Node*ptr = head;
	do{
		printf("Element is %d\n",ptr->data);
		ptr= ptr->next;
	}while(ptr!=head);	
	}

// Insertion of new node at first
struct Node* insertAtFirst(struct Node*head, int data){
	struct Node* ptr= (struct Node *)malloc(sizeof(struct Node));
	ptr->data=data;
	struct Node * p = head->next;
	while(p->next!=head){
		p=p->next;
	}
	// At t his point p points to the last node of the circular linked list
	p->next= ptr;
	ptr->next=head;
	head=ptr;
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
	fifth->next= head;
	printf("Circular Linked list before insertion\n");
	// Calling the traversal function
	Traversal(head);
	printf("Circular Linked list after insertion\n");
	// Insertion at first
     head=	insertAtFirst(head,999);
     head=	insertAtFirst(head,888);
	// Calling the traversal function
	Traversal(head);
	return 0;
}
