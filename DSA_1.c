#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node {
	
	int data ;
	struct node *left;
	struct node *right;
	
};
struct node * newnode(int data){
	
	struct node * node = (struct node*)malloc(sizeof(struct node));
	
	node->data = data;
	node->left = NULL;
	node->right = NULL;
	 
	return(node);
	
}
void Inorder(struct node * node){
	
	if(node==NULL){
		return ;
	}
	
	Inorder(node->left);
	printf("%d" , node->data);
	Inorder(node->right);
	
}
void Preorder(struct node * node){
	
	if(node==NULL){
		return ;
		
	}
	
    printf("%d" , node -> data);
    Preorder(node->left);
    Preorder(node->right);
    
}
void Postorder(struct node* node){
	
	if(node==NULL){
		return;
		
	}
	Postorder(node->left);
	Postorder(node->right);
	printf("%d" , node->data);
	
}
/*
struct node *search(struct node *root){
	int  no  ,i ,  ino;
	struct node *ptr;
	ptr = root;
	printf("\n Enter the element to be searched :");
	scanf("%d"  , &no);
	fflush(stdin);
	while(ptr){
		
		if(no> ptr->data){
			 
			 ptr = ptr->right;}else if(no<ptr->data)
			 	ptr = ptr->left;else
				break;
		
	}
	if(ptr){
		printf("\n Element %d which is Searched is found and is %d" ,no , ptr->data);
		printf("\n Do you want to replace it  if yes Press 1 if no then write exit \n");
		scanf("%d" ,&i);
		if(i==1){
			printf("\nEnter the new element\n");
			scanf("%d" , &ino);
			ptr->data = ino;
			
		}
		else{
			printf("\n\t It's  OKAY ");
			
		}
		
		
		
	}
	else{
			printf("\n Element %d is not found in the Binary tree" , no);
			return(root);
		}
	
	
}
*/
int main(){
	
	struct node *root = newnode(1);
	root->left = newnode(2);
	root->right = newnode(3);
	root->left->left = newnode(4);
	root->left->right = newnode(5);
	root->right->left = newnode(6);
	root->right->right = newnode(7);
	
	printf("\n Inorder traversal of binary tree is \n ");
	Inorder(root);
	printf("\n Preorder traversal of binary tree is \n ");
	Preorder(root);
	printf("\n Postorder traversal of binary tree is \n");
	Postorder(root);
	
	
	 /*root = search(root);*/
	
	
	
	
}


