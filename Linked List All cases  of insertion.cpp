#include<stdio.h>
#include<stdlib.h>
 struct Node 
 {
    int data;
	struct Node * next;
		
 };
 void LinkedListTraversal(struct Node* ptr)
 {
    while(ptr!= NULL)
    {
    	printf("Element :%d\n" , ptr -> data);
    	ptr = ptr -> next;
    	
	}
		   
 }
 // Case 1 :--> Inserting the element at the beginning
 struct Node*InsertatFirst(struct Node*head , int data)
 {

 	struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
 	ptr -> data;
 	ptr -> next;
 	return ptr;
 }
 // Case 2 :--> Insert the element in between;
 struct Node * InsertatIndex(struct Node * head , int data , int index)
 {
 	struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
 	struct Node *p = head;
 	int i = 0;
 	while(i!=index-1)
 	{
 		p =p -> next;
 		i++;
	    	
	}
	ptr -> data= data;
	ptr -> next = p -> next;
	p -> next = ptr;
	return head;
 	
 }
 // Case 3:--> Insert at the end;
 struct Node * InsertatEnd(struct Node* head , int data )
 {
 	struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
 	ptr -> data = data;
 	struct Node * p = head;
 	while(p->next!=NULL)
 	{
 		p = p -> next;
 			
    }
 	p->next = NULL;
 	return head;
 	
 }
 //case 4 :--> Insert after given code;
 struct node* InsertAfterNode(struct Node* head , struct Node *prevNode, int data)
 {
 	struct Node * ptr = (struct Node*)malloc(sizeof(struct Node));
 	ptr -> data = data;
 	ptr -> next = prevNode ->next;
 	prevNode -> next = ptr;
 	
 	
}
int main()
{
	struct Node * head ;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;
    
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node));
    
    head -> data = 4;
    head -> next = second;
    
    second  -> data = 54;
    second -> next = third;
    
    third -> data = 55;
    third -> next = fourth;
    
    fourth -> data = 45;
    fourth -> next = NULL;
    
    
    printf("linked List before Insertion : \n");
    LinkedListTraversal(head);
    printf("Linked list after Insertion :\n" );
    LinkedListTraversal(head);
    
    return 0;
	
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 